#include <stdio.h>
#include<stdlib.h>
/**
 * main - starting point product of two numbers
 * @argc: numbert to be counted
 * @argv: array that contain the program
 * Return: (0)pass
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
