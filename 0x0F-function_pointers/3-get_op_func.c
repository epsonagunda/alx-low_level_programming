#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
*get_op_func - function returns a pointer to the function
*@s:is the operator passed as argument
*Return: 0
*/
int (*get_op_func(char *s))(int, int)
{
op_t op_s[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int b = 0;
while (op_s[i].op)
{
if (*(op_s[b].op) == *s)
return (op_s[b].f);
b++;
}
return (NULL);
}
