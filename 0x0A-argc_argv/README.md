#0x0A. C - argc, argv


Arguments to main
argument to the main are very useful to give parameters to programs.
also give direction on program to complete task.

syntax 
int main(int argc, char *argv[]);
int main(int argc, char **argv);

main indicate the function return an integer.
exit status indicate that a program completed succesfully.

<stdlib.h>: EXIT_SUCCESS and EXIT_FAILURE.

the are two arguments in the main that is
argc - count of argument supplied to the program
argv - is an array of pointer to char
argv is used to refer to an array of string, declaration

char *argv[]
char **argv;

 
int main(int argc, char **argv);

argc is greater than zero
argv[argc] is a null pointer
argv[0] through to argv[argc-1] are pointers to strings
argv[0] will be a string containg the program's name.

a program which writes the arguments supplied to main on the progra's standard output

#include <stdio.h>
#include <stdlib.h>
int main(argc, char **argv);
{
while (argc--)
printf("%s\n"; *argv++);
exit(EXIT_SUCCESS);
}


argc and argv

GNU/Linux command line
if we compile an executable called myprog - ./myprog

GCC gcc -o myprog myprog.c
arguments(-o,myprog myprog.c)

syntax for C
#include <stdio.h>
int main()
{ 
return 0;
}

#include <stdio.h>
int main(int argc, char *argv[])
{
return 0;
}

agrc - argument count (count the number of arguments passed to the program)
agrv - argument vector ( vector is one dimensional array)
agrv is one-dimensional array of strings.

example

gcc -0 myprog myprog.c

argc - 4
argv[0]
gcc

argv[1]
-o

argv[2]
myprog

argv[3]
myprog.c

program accepts any number of command-line arguments and prints them out.

#include <stdio.h>

int main (int argc, char *argv[])
{
  int count;

  printf ("This program was called with \"%s\".\n",argv[0]);

  if (argc > 1)
    {
      for (count = 1; count < argc; count++)
	{
	  printf("argv[%d] = %s\n", count, argv[count]);
	}
    }
  else
    {
      printf("The command had no other arguments.\n");
    }

  return 0;
}



