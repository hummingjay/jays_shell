#include <stdio.h>
#include <unistd.h>

/**
 * main - prog that forks from parent
 *
 * Return: 0
 */
int main()
{
	/*define variable*/
	pid_t pid;
	printf("Here I am before I'm forked\n");

	fork();
	
	if (pid == -1)
	{
		perror("Sucks, but it failed");
		return (1);
	}

	printf("I'm forked up :)");

	return (0);
}
