#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() {
	pid_t pid;
	for (int i = 0; i < 5; i++){ 
		pid = fork();
		if (pid == 0) {
			printf("%d", i);
			exit(0);
		}
	}

}
