## ftrace.log 파일 분석

### 1. single_thread 실행시 레이스 컨디션이 발생하지 않음
 - 673 line ~ 683 line을 보면 do_exit에 추가된 커널 패치코드가 순차적으로 실행되었음
![kernel_sync(single_thread)](https://user-images.githubusercontent.com/50316116/113103260-04219400-923a-11eb-8baf-6da01c898d69.PNG)

### 2. multi_thread 실행시 레이스 컨디션이 발생
 1. 1388 line 에서 1670번의 PID가 do_exit함수에서 global_func_exe_times값을 1349로 출력 및 trace_function_dummy_call
 2. 1390 line에서 1669번 PID가 global_func_exe_times값을 1350으로 출력 및 trace_function_fummy_call 함수 호출
 3. 이후 1406 ~ 1407 line에서 1670, 1669번 Process가 global_func_exe_times값을 출력
 * 여기서 1670번의 PID는 global_func_exe_times가 1349일 때 호출되었기 때문에 1406 line에서 1350값을 출력해야 하지만
     레이스 컨디션 때문에 다른 cpu에서 실행하는 다른 스레드가 동시에 연산을 진행하여 1351을 출력하였음
![kernel_sync](https://user-images.githubusercontent.com/50316116/113103543-5cf12c80-923a-11eb-9892-dbf1de338be8.PNG)
