#include "main.h"

/**
 * putss - prints string
 * @c: the string to print
 * Return: bytes number
 */

int putss(char *c)
{
	int count = 0;

	if (c)
	{
		for (count = 0; c[count] != '\0'; count++)
		{
			teamputchar(c[count]);
		}
	}

	return (count);
}
