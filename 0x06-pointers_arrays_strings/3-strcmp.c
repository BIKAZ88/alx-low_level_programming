#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not
 */

int _strcmp(char *s1, char *s2)
{
int equal = 0;
while (*s1)
{
if (*s1 != *s2)
{
equal = ((int)*s1 - 40) - ((int)*s2 - 40);
break;
}
s1++;
s2++;
}
return (equal);

}
