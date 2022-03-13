#include <stdio.h>
/**
 *main - entry point
 *Description: print alphabets in lower case and upper case
 *Return: 0
 */
int main(void)
{

int small = '0';

while (small <= '9')
{
	putchar(small);	
	if (small != '9')
	{
	putchar(',');
	putchar(' ');
	}
	small++;
}
putchar('\n');
return (0);
}
