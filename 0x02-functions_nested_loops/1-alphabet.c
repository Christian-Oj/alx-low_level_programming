#include <stdio.h>
#include "main.h"

/**
 * main -> calls a function print_alphabet
 * print_alpabet:does not return any value but prints localcase of the alphabets
 * Return: 0 always
 */

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char result;
	for (char c = 'A'; c <= 'Z' ; ++c)
	{
		result = tolower(c);
		_putchar(result);	
	}
	_putchar("\n");
}
