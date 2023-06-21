#include <stdio.h>
/**
 * main - print Fibonacci up to 4000000
 * Return: always 0
 */
int main(void)
{
	int counter;
	unsigned long i, j, k;

	counter = 0;
	i = 0;
	j = 1;
	while (counter < 50)
	{
		k = i + j;
		if (k >= 4000000)
		{
			k = k - i;
			printf("%lu\n", k);
			break;
		}
		i = j;
		j = k;
		counter++;
	}
	return (0);
}
