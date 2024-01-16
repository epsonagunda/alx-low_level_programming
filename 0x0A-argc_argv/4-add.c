#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program to add positve numbers
 * @argc: number to be counted
 * @argv: array of command lines
 * Return: (0) pass
 */
int main(int argc, char **argv)
{
int a, b, add = 0;
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (!isdigit(argv[a][b]))
{
printf("error\n");
return (1);
}
}
add += atoi(argv[a]);
}
printf("%d\n", add);
return (0);
}
