#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: a pointer to the newly allocated space in memory
 * which contains the contents of s1, followed by the contents
 * of s2, and null terminated. Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat_str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat_str[i] = s1[i];

for (j = 0; j < len2; j++)
concat_str[i + j] = s2[j];

concat_str[i + j] = '\0';

return (concat_str);
}

