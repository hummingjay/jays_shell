#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - prog that uses the wait process
 *
 * Return: 0
 */
int main(void)
{
	pid_t pid;
	int status;

	/*Creation of child process*/
	pid = fork();

	/*if fork fails*/
	if (pid == -1)
	{
		perror("Fork naught");
		return (1);
	}

	/*in the child*/
	if (pid == 0)
	{
		printf("Don't leave me...\n");
	}
	/*parent process*/
	else
	{
		/*just adding a slight delay*/
		sleep(7);
		/*if not interested in status pass NULL*/
		wait(&status);
		printf(";) Don't worry I gotcha\n");
	}
	return (0);
}
