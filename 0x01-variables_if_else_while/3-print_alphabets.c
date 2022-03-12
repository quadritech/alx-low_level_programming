#include <stdio.h>
/**
 *main - entry point
 *Description: print alphabets in lower case and upper case
 *Return: 0
 */
int main(void)
{

char letters = 'a', 'A';

while (letters <= 'z', 'Z')
{
	putchar(letters++);
}
putchar('\n');
return (0);
}
