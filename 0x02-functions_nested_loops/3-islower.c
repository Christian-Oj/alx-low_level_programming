#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_alphabet -> prints lowercase of the alphabets
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
