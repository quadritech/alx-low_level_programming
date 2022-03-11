#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{

char c;
int i;
long int a;
long long int b;
float f;

printf("Size of an char is: %lu. byte(s)(\n", (unsigned long)sizeof(c));
printf("Size of an int is: %lu. byte(s)\n", (unsigned long)sizeof(i));
printf("Size of an long int is: %lu. byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an long long int is: %lu. byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an float is: %lu. byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
