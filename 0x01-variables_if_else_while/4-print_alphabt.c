#include <stdio.h>
/**
 *main - entry point
 *Description: print alphabets in lower case
 *Return: 0
 */
int main(void)
{

char letters = 'a';

while (letters <= 'z')
{
	if (letters == 'e' || letters == 'q')
	{
	}
	else
	{
	putchar(letters);
	}
	letters++;
}
putchar('\n');
return (0);
}
