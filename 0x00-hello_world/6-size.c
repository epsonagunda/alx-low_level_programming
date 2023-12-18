#include <stdio.h>
/**
 * main - A program to print the size of various type of computers.
 * Return: 0 (pass)
 */

int main(void)
{
	char 1;
	int 2;
	long int 3;
	long long int 4;
	float 5;


printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(1));
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(2));
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(3));
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(4));
printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(5));
return (0);
}
