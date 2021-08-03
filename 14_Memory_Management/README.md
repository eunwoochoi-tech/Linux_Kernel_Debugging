# 디버깅으로 배우는 리눅스 커널의 구조와 원리2

## Key Concepts

### 14.1.1 What is Virtual Memory?
 - CPU에서 구동 중인 프로세스 항상 가상주소를 바라본다(커널또한 마찬가지)
 - 가상주소 -> 물리주소 의 변환을 담당해 주는것이 MMU이며 MMU 내부에 TLB버퍼가 존재하여 최근에 변환된 Page Table Entry정보를 가지고 있다 
 - 물리주소는 page단위(4k)로 잘라서 관리되는데 이때 page단위로 잘라서 번호를 매긴 것을 **Page Frame Number**라고 한다
 - Page Frame Number변환방법 = 물리주소 >> 12
 - Page Frame Number를 사용하면 Page Descriptor인 **struct page(페이지 프레임을 관리하는 자료구조)**의 주소를 알아낼 수 있다.
 - Page Descriptor는 mem\_map이라는 포인터형 배열에서 관리하며 mem\_map[PFN]를 통해 바로 접근가능

### 14.1.2 What is Page Table?
 - Page Table : 가상주소를 물리주소로 변환할 수 있는  매핑 정보를 가진 Table
 - TTBR : Translation Table Base Register의 약자로서 Page Table의 시작 주소를 의미한다(리눅스 커널 내부의 swapper_pg_dir 전역변수에서 확인가능)




