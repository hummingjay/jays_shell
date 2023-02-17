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

	printf("Here I am before I'm forked\n");

	pid = fork();

	if (pid == -1)
	{
		perror("Sucks, but it failed\n");
		return (1);
	}

	printf("I'm forked up :!\n");

	return (0);
}
