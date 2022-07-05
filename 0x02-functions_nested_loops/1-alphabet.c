#include <stdio.h>
#include "main.h"

/**
 * print_alpabet -> does not return any value but prints localcase of the alphabets
 * Return: 0 always
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z' ; ++c)
	{
		_putchar(c);	
	};
	_putchar('\n');
}
