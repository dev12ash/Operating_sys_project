
// A C program to demonstrate Zombie Process. 
// Child becomes Zombie as parent is sleeping
// when child process exits.
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
    // Fork returns process id
    // in parent process
    int child_pid = fork();
    if(child_pid<0) return -1;
    // Parent process : Child process
    if (child_pid > 0) {
            printf("parent proc pid: %d\n", getpid());
            sleep(15);
        }
    else {
        printf("child proc pid: %d\n", getpid());
        exit(0);
        }
    return 0;
}