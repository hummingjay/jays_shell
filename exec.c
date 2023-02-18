#include <stdio.h>
#include <unistd.h>

int main(void)
{
	/*create array of strings 1: file name, 2:Argument, 3: NUll pointer*/
	char *argv[] = {"/bin/ls", "l", NULL};

	/*assign to check if error since no return on success*/
	if (exec(argv[0], argv, NULL) = -1)
		perror("Wrong");
	else
		printf("Successful");
	return (0);
}
