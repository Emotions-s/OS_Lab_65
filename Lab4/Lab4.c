#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<time.h>

int main(int argc, char* argv[]) {
	pid_t pid;
	int i = 0;
	time_t times;
	
	pid = fork();
	// if (pid != 0) {
	// 	wait(NULL);
	// }	
	if (pid > 0) {
		i = 1;
		times = time(NULL);
		printf("my copy of i is %d %ld\n", i,times);
	}
	else {
		i = 2;
		times = time(NULL);
		printf("my copy of i is %d %ld\n", i, times);
	}
	// wait(NULL);



	return 0;
}
