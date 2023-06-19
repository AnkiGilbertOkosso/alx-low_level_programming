#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: The pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *sub;
	while (*haystack != '\0')
	{
		start = haystack;
		sub = needle;

		while (*haystack != '\0' && *sub != '\0' && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (*sub == '\0')
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
