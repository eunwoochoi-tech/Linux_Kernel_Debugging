# 디버깅으로 배우는 리눅스 커널의 구조와 원리2

## Key Concepts

### 14.1 What is Virtual Memory?
 - CPU에서 구동 중인 프로세스 항상 가상주소를 바라본다(커널또한 마찬가지)
 - 가상주소 -> 물리주소 의 변환을 담당해 주는것이 MMU이며 MMU 내부에 TLB버퍼가 존재하여 최근에 변환된 Page Table Entry정보를 가지고 있다 
 - 물리주소는 page단위(4k)로 잘라서 관리되는데 이때 page단위로 잘라서 번호를 매긴 것을 **Page Frame Number**라고 한다
 - Page Frame Number변환방법 = 물리주소 >> 12
 - Page Frame Number를 사용하면 Page Descriptor인 **struct page(페이지 프레임을 관리하는 자료구조)**의 주소를 알아낼 수 있다.
 - Page Descriptor는 mem\_map이라는 포인터형 배열에서 관리하며 mem\_map[PFN]를 통해 바로 접근가능



### Page Table?
 - 전체 메모리는 페이지라는 단위로 나뉘어서 관리된다. 이때 가상주소와 물리주소의 변환은 페이지 단위로 이루어진다.
 - 한 Page에 대한 데이터를 Page Table Entry라고 하며 이의 집합을 Page Table이라고 한다

### Page Fault?
 - 가상 주소가 물리 주소와 매핑되어있지 않는 경우 Page Fault Interrupt Handler가 발생한다. 또는 올바르지 않은 가상 주소로의 접근역시 동일하게 인터럽트 핸들러가 발생한다.

### Demand Paging?
 - Process에게는 Virtual address가 할당되었지만 실제 Physical address는 할당되지 않은 상태를 의미
 - 실제 Process에서 해당 address에 접근할 때 Physical address가 할당됨

### How memory is allocated to a process
 1. Request memory from a process(ex: malloc, mmap etc...)
 2. Kernel allocate new memory space(update page table)
 3. Return a virtual address to a process

### Mmap allocate page unit, malloc allocate byte unit
 - mmap의 경우 페이지 단위로 할당을 진행하며 malloc의 경우 byte단위로 할당을 진행한다.
 - glibc의 malloc의 경우 사전에 mmap system call을 사용하여 커다란 memory pool을 생성하고 여기서 필요한 바이트만큼 반환해주는 형식

### Copy on Write
 - fork() System call을 수행할 때 부모 process의 memory를 자식 process에 전부 복사하는 것이 아닌 페이지 테이블만 복사한다.(이때 페이지 테이블 엔트리의 쓰기 권한은 부모,자식 모두 무효화됨)
 - 이후 페이지를 읽는것은 상관 없지만 메모리의 특정부분을 변경하고자 하면(즉, 페이지의 내용을 변경) 다음과 같은 흐름으로 진행된다.
   1) Page의 쓰기권한이 없기때문에 Page Fault가 발생(Page Fault Handler 실행)
   2) 접근한 페이지를 다른 장소에 복사하고 페이지에 접근한 프로세스에 할당 후 내용을 다시 작성
   3) 부모와 자식 프로세스 각각 공유가 해제된 페이지에 대응하는 페이지 테이블 엔트리를 업데이트
   4) 해당 Page는 더이상 공유하지 않으므로 양쪽(부모,자식) 모두 쓰기권한이 허가된다
 * fork()를 2번 호출 후 2번째 자식프로세스에서 특정 페이지에 쓰기를 진행하면 2번째 자식 프로세스에게만 페이지 테이블이 따로 할당될까? 아니면 자식1과 부모 프로세스도 따로 할당될까?
 * 주의할 점 : Copy on Write와 같은 상황에서는 전체 프로세스가 사용하는 process의 물리 메모리양이 실제 사용하고 있는 물리 메모리양보다 많다.

### Swaping
 - 물리 메모리의 양이 부족해지면 일부분을 저장장치에 저장하여 물리 메모리에 빈 공간을 생성한다. 이를 스왑핑이라고 한다
 - Swaping의 단위는 Page이며 이를 페이징(Paging)이라고도 한다.
 - 만약 물리 메모리 부족현상이 만성적으로 나타난다면 저장장치에 접근할 때 마다 swap-in swap-out이 발생하여 스래싱(thrashing)상태가 된다.(시스템의 속도가 현저히 낮아짐)
 - Swaping과 같이 저장장치에 대한 접근이 발생하는 Page Falut를 Major Fault라고 하며 이외의 것들을 Minor Fault라고 한다.(어느쪽이든 성능에 영향을 미치지만 Major Fault가 훨씬 느리다)

### Hierarchical Page Table
 - x64의 가상 주소의 크기는 128TB이기 때문에 이 모든 내용을 Page Table Entry로 가지고 있다면 총 256GB가 Page Table로 사용될 것이다. 이는 현실적으로 문제가 되기 때문에 x64 architecture의 경우 계층적인 페이지 테이블을 가지고 있다.(복잡하기 때문에 따로 정리)

### Huge Page
 - 한 페이지의 크기를 키워서 페이지 테이블을 작성하는 것.
 - 가상 메모리를 많이 사용하는 process에 대해서 Page Table에 필요한 메모리의 양이 줄어든다.

## Tests

### mmap.c
 -> mmap을 통한 메모리 할당 전,후의 virtual address list를 비교

### filemap.c
 -> file을 memory영역에 mapping시켜서 write 또는 fprintf와 같은 함수를 사용하지 않아도 memory영역에 데이터를 쓰면 파일의 내용도 바뀜(sync문제가 있는것으로 보임. 추후 다시 보기)

### demand-paging.c & vsz-rss.sh
 -> demand paging을 확인하기 위해 Memory를 할당받고 해당 영역에 접근하기 전/후의 Physical Memory 사용량을 비교
