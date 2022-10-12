// 64050177 Pisit Pruangprat
// q1
// Received a SIGUSR1. The max n is 20! = 2432902008176640000

// q2
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main(void)
{
    pid_t pid = fork();
    if (pid == 0)
    {
        printf("child created\n");
        while (1) {
            printf("Kill me please\n");
            sleep(1);
        };
        printf("This line not show");
        exit(0);
    }
    else
    {
        for (int i = 5; i > 0; i--)
        {
            printf("parentPS will kill childPS in %d sec\n", i);
            sleep(1);
        }
        kill(pid, SIGQUIT);
    }
}
