#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-la", "/usr/", NULL};

	printf("Before execute\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	} else
	{
		printf("After execute\n");
	}
	return (0);
}
