#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
int c;

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
