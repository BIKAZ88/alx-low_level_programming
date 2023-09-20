#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
int c, c2;

c = 0;

while (dest[c])
c++;

for (c2 = 0; scr[c2] ; c2++)
dest[c++] = scr[c2];

return (dest);
}
