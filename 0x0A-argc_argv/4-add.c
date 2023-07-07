#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: arguments
 * Return: 1 if there is an error otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;
	char *ptr;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		num = strtol(argv[i], &ptr, 10);
		if (*ptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

