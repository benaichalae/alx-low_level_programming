#include <stdio.h>
/**
 * main - print Fibonacci up to 4000000
 * Return: always 0
 */
int main(void)
{
	int counter;
	unsigned long i, j, k, u;

	counter = 0;
	i = 0;
	j = 1;
	k = 2;
	while (counter < 50)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			i = i + j;
		}
		u = j + k;
		j = k;
		k = u;
		counter++;
	}
	printf("%lu\n", i);
	return (0);
}
