#include "main.h"
/**
* print_alphabet_x10 - print alphabet in lowercase x10
* Return: 0 on success
*/
void print_alphabet_x10(void)
{
	char letter;
	int n;

	n = 0;
	while (n < 10)
	{
	letter = 'a';
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
	n++;
	}
}
