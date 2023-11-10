#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;
    pid_t parent_pid;

    my_pid = getpid();
    parent_pid = getppid();
    printf("%u\n", my_pid);
     printf("%u\n", parent_pid);
    return (0);
}
