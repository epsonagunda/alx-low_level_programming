#include<stdio.h>
/**
 * main - startin point
 * @argc: number of command line to count
 * @argv: array of command line argument
 * Return: (0)pass
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
