#include "main.h"

/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */

char *_strncat(char *dest, char *src, int n);
{
int c, i;

c = 0;

while (dest[c])
c++;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[c + i] = '\0';

return (dest);
}
