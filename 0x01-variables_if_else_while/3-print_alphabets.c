#include <stdio.h>
/**
 *main - entry point
 *Description: print alphabets in lower case and upper case
 *Return: 0
 */
int main(void)
{

char small = 'a';

while (small <= 'z')
{
	putchar(small);
	small++;
}
small = 'A';
while (small <= 'Z')
{
	putchar(small);
	small++;
}
putchar('\n');
return (0);
}
