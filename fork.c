#include <stdio.h>
#include <unistd.h>

/**
 * main - prog that forks from parent
 *
 * Return: 0
 */
int main(void)
{
	/*define variable*/
	pid_t pid;
	pid_t pid2;

	printf("Here I am before I'm forked\n");

	pid = fork();

	if (pid == -1)
	{
		perror("Sucks, but it failed\n");
		return (1);
	}

	printf("I'm forked up :!\n");
	pid2 = getpid();
	printf("My pid is %u\n", pid2);

	return (0);
}
