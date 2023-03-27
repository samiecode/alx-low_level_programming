#include "main.h"

/**
 * *_strcpy - copies the string pointed to
 *
 * @dest: destination
 * @src: source
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
