#include "main.h"

/**
 * String_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 *
 */

char *string_toupper(char *n)
{
int i;

i = 0;
while (n[i] != '\n')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}
