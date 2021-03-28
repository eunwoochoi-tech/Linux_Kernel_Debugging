## ftrace.log 파일 분석

### 1. (35번 라인) 5015.726초에 do_timer함수 호출( 57라인까지 함수 실행 내용)

### 2. (58번 라인) 5015.736초에 또다시 do_timer함수 호출 ( 80라인까지 함수 실행 내용)

### 3. 무한반복..(로그를 통해서 10ms마다 1번씩 호출되는 것을 알 수 있다) => 라즈베리파이 3+의 jiffies는 1초에 100이 증가하므로 적절한 간격임을 알 수 있다

<img width="991" alt="Screen Shot 2021-03-28 at 9 26 29 PM" src="https://user-images.githubusercontent.com/50316116/112752120-73b23c00-900c-11eb-9d45-f47d61ea1122.png">
