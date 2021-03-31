#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>

void* thread_routine(void* args)
{
	for(int i = 0; i < 5; i++)
	{
		int pid = fork();
		if(pid == 0)
			break;
	}
}


int main(void)
{
	pthread_t thread[3];

	pthread_create(&thread[0], NULL, thread_routine, NULL);
	pthread_create(&thread[1], NULL, thread_routine, NULL);
	pthread_create(&thread[2], NULL, thread_routine, NULL);


	return 0;
}
