#include "main.h"
#include <stdlib.h>
<<<<<<< HEAD
/*
 create_array - creates an array of chars.
 @size: size of the array.
 @c: storaged char
 Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
		char *cr;
			unsigned int i;

				if (size == 0)
							return (NULL);

					cr = malloc(sizeof(c) * size);

						if (cr == NULL)
									return (NULL);

							for (i = 0; i < size; i++)
										cr[i] = c;

								return (cr);
}
=======

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
		return (0);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(s + i) = c;

	*(s + i) = '\0';

	return (s);
>>>>>>> 32836feebc0a97bd7b98acded67fc354eef3d5bc
