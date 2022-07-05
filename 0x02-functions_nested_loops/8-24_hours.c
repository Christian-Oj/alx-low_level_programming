#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * jack_bauer - prints every second within 24 hours
 * Return: 0 always
 */
void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	
	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			fprintf(stdout, "%02d:%02d\n", i,j);
			j++;
		}
		i++;
	}
}
