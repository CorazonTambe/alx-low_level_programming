#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the alphabetic
 * Return: Always (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	for (c = 'a'; c <= 'z'; c++)
	{
	putchar (c);
	}
	putchar ('\n');
	return (0);
}
