#include <stdio.h>
/**
 * main - A program to print the size of various type of computers.
 * Return: 0 (pass)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
