#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if argument is uppercase
 * @c: integer parameter
 *
 * Created by: Cristian-Oj
 * Creation Date: 08 July 2022
 */
int _isupper(int c)
{
	int res;

	res = isupper(c) == 0? 0 : 1;
	return (res);
}
