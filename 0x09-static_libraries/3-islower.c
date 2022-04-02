#include "main.h"
/**
 * _islower - entry point
 * Description: to check for lower case character
 * @c: is the value to compare
 * Return: 1 if c , 0 if not c
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
