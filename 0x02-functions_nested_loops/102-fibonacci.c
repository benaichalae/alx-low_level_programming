#include <stdio.h>
/**
 * main - print 50 Fibonacci numbers
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
		printf("%lu", k);
		i = j;
		j = k;
		if (counter == 49)
			printf("\n");
		else
			printf(", ");
		counter++;
	}
	return (0);
}
