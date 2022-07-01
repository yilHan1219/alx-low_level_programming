#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
{
return (NULL);
}

for (i = 0; i < (nmemb * size); i++)
{
*((char *)(p) + i) = 0;
}

return (p);
}
