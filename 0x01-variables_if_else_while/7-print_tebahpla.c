#include <unistd.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
char low;
for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');
return (0);
}
