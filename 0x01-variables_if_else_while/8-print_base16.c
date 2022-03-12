#include <stdio.h>
/**
 *main - entry point
 *Description: print alphabets in lower case and upper case
 *Return: 0
 */
int main(void)
{

char num = 0;

while (num <= 9)
{
	putchar(num);
	num++;
}
num = 'a';
while (num <= 'f')
{
	putchar(num);
	num++;
}
putchar('\n');
return (0);
}
