#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * Description: prints char below 10
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = '0'; a <= 9; a++)
{
putchar(a + '0');
}
putchar('\n');
return (0);
}
