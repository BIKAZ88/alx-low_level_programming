#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */
size_t print_list(const list_t *h)
{
ize_t s = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}

return (s);
}
