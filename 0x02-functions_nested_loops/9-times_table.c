#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * times_table -  The times tables for number 9
 * Return: 0 always
 */
void times_table(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			fprintf(stdout, "%2d", i*j);
			if (j < 9)
				fprintf(stdout, ", ");
			j++;
		}
		fprintf(stdout, "\n");
		i++;
	}
}
