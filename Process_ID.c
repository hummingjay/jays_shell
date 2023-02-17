#include <unistd.h>
#include <stdio.h>

/**
 * main - program that prints out the pid
 * Return: 0
 */
int main()
{
	/*pid_t-datatype for the process ID*/
	pid_t pid;

	/*calling the pid(The funcyion does not take arguments)*/
	pid = getpid();

	/*print output*/
	printf("The pid is %u\n", pid);
	printf("The pid is %d\n", pid);

	return (0);
}
