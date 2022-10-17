#include "main.h"

/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */

char *rev_string(char *s)
{
	int len;
	int header;
	char temp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (header = 0; header < len; header++, len--)
	{
		temp = dest[len - 1];
		dest[len - 1] = dest[header];
		dest[header] = temp;
	}
	return (dest);
}
