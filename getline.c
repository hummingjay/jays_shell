#include <stdio.h>
#include <stdlib.h>

/**
 * main - prog that reads input using getline which reads from stream
 * (input of keyboard) then stores the address of buffer in *lineptr
 * syntax: ssize_t getline(char **lineptr, size_t *n, FILE *stream);
 *
 * Return:0
 */
int main(void)
{
	/*Assigning memory for this*/
	size_t n = 7;
	/*buffer, can assign NUll leave getline to assign memory*/
	char *buf = malloc(sizeof(char) * n);

	printf("$");
	getline(&buf, &n, stdin);

	printf("%s\n Buffer size is %ld\n", buf, n);

	free(buf);

	return (0);
}
