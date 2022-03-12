#include <stdio.h>
/**
 *main - entry point
 *Description: print alphabets in lower case
 *Return: 0
 */
int main(void)
{

char letters = 'z';

while (letters >= 'a')
{
	putchar(letters--);
}
putchar('\n');
return (0);
}
