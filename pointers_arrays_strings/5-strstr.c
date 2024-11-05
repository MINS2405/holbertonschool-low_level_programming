#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located substring,
 *or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
char *h, *n;

if (*needle == '\0')
return (haystack);

while (*haystack)
{
h = haystack;
n = needle;

while (*h == *n && *n != '\0')
{
h++;
n++;
}

if (*n == '\0')
return (haystack);

haystack++;
}

return (NULL);
}
