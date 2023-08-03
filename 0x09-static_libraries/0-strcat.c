#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)

{

	int a;

	int t;


	a = 0;

	while (dest[a] != '\0')

	{

	a++;

	}

	t = 0;

	while (src[t] != '\0')

	{

	dest[a] = src[t];

	a++;

	t++;

	}


	dest[a] = '\0';

	return (dest);

}
