#include "main.h"
/**
 * main - entry point
 *Description: to print alphabet in lower case
 *Return: Always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
