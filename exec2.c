#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 * main - improvement of exec.c by now using wait
 * to ensure parent finishes running after execve
 * which will run in the child
 *
 * Return:0
 */
int main(void)
{
	pid_t pid;
	int val;
	char *argv[] = {"/bin/ls", "-l", NULL};

	pid = fork();
	if (pid == -1)
	{
		perror("you ain't forked nothin\n");
		return (0);
	}
	if (pid == 0)
	{
		printf("Before execve\n");
		val = execve(argv[0], argv, NULL);
		if (val == -1)
		{
			printf("Didn't execute a thing\n");
			return (0);
		}
	}
	else
	{
		wait(NULL);
		printf("Done executing\n");
	}
	return (0);
}
