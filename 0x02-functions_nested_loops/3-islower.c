#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - check if character is lowercase
 * @c: is an integer value
 * Return: 0 always
 */
int _islower(int c)
{
	int i;

	i = islower(c);
	if (i == 0)
		return (0);
	else
		return (1);
}
