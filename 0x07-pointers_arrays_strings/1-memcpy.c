#include "main.h"

/**
 * *_memcpy - function that copy memory area
 *
 * @dest: input memory area
 * @src: input source
 * @n: input length of src to be copied
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
