#include "main.h"
/**
 * main - entry point
 *Description: to print alphabet in lower case
 *Return: Always 0
 */
int main(void)
{
	char letter = 'a';
	
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}	
	_putchar('\n');
	return (0);
}
