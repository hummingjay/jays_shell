#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 * main - improvement of exec.c by now using wait
 * to ensure parent finishes running after execv
 *
 * Return:0
 */
int main(void)
{
	pid_t pid;
	int val;
	char argv[] = {"/bin/ls", "-l", NULL};

	pid = fork();
	if (pid == -1)
	{
		perror("you ain't forked nothin");
		return (0);
	}
	if (pid == 0)
	{
		printf("Before execve\n");
		val = execve(argv[0], argv, NULL);
		if (val == -1)
		{
			printf("Didn't execute a thing");
			return (0);
		}
	}
	else
	{
		wait(NULL);
		printf("Done executing");
	}
	return (0);
}
