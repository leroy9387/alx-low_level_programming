#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
<<<<<<< HEAD

char *_memset(char *s, char b, unsigned int n);
=======
char *_memset(char *s, char b, unsigned int n)
>>>>>>> 29fb3a591aa356caea2f928cd79861f828a52511
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
