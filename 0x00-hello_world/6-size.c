#include <stdio.h>
/**
 * main - prints the size of various types based on
 * the computer it is compiled and ran on
 * Return: Always (0)
 */
int main(void)
{
printf("Size of a char: 1 byte\n", sizeof(char));
printf("size of an int: 4 byte(s)\n", sizeof(int));
printf("Size of a long int: 4 bytes(s)\n", sizeof(long int));
printf("Size of a long long int: 8 bytes(s)\n", sizeof(long long int));
printf("Size of a float: 4 bytes(s)\n", sizeof(float));
return (0);
}
