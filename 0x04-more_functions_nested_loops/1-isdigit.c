#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if argument is uppercase
 * @c: integer parameter
 *
 * Return: 1 if char is uppercase, 0 otherwise
 *
 * Created by: Cristian-Oj
 * Creation Date: 08 July 2022
 */
int _isdigit(int c)
{
	int res;

	res = isdigit(c) == 0? 0 : 1;
	return (res);
}

