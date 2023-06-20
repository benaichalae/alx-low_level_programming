#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
