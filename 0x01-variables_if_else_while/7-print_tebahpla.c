#include<unistd.h>
#include<stdio.h>
/**
 * Main - Entry point
 * Description: prints lowercase alphabets in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;

for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
return (0);
}
