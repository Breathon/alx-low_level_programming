#include "main.h"

/** _memcpy -copies a memory area
 * @dest: memory area to be copied to
 * @src: number of bytes to be copied
 *
 * Return: pointerto be copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsignged int i = 0;

	for (; i < n; i++)
	{
		dest{i} = src[i];
	}

	return (dest);
}
