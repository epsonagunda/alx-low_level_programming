#include<stdio.h>
/**
 * main -  starting point of our program
 *@argc: count the number arguments
 *@argv: array of character pointer which contain all the parameters
 *Return: (0) pass
 */
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", argv[0]);
return 0;
}
