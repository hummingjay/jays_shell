#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
/**
 * main - program that prints out the ppid and pid of the
 * prog
 *
 * Return:0
 */
int main(void)
{
	/*define data type*/
	pid_t pid;
	pid_t ppid;

	/*set values by calling them*/
	pid = getpid();
	printf("The pid is %u\n", pid);

	ppid = getppid();
	printf("The ppid is %u\n", ppid);

	return (0);
}
