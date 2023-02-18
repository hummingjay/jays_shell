#include <stdio.h>
#include <unistd.h>

int main(void)
{
	/*create array of strings 1: file name, 2:Argument, 3: NUll pointer*/
	char *argv[] = {"/bin/ls", "-l", NULL};
	int val;

	printf("Here before execve\n");

	/*assign to check if error since no return on success*/
	val = execve(argv[0], argv, NULL);

	if (execve(argv[0], argv, NULL) == -1)
		perror("Wrong");
	else
		/*This won't be printed since when successful execve overwrites prog*/
		printf("Successful");
	return (0);
}
