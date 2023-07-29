#include "main.h"

/**
 * teamputchar - print a char
 * @c: char input
 * Return: 1
 */

int teamputchar(char c)
{
	return (write(1, &c, 1));
}
