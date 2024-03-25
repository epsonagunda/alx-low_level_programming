#dynamic and static libraries

library is collection of object files grouped into one unit to ease programming work distribution or to structure developent into units.
a static library is  file(with extension.a) ment to be attached to a compiled objectfile to form an executable file.
dynamic library also named shared library with extension.so is not part of an executable file linked with it.

building a c dynamic library.
.c source files and .o object codes.
gcc -c -fPIC fct.c
-fPIC flag stands for Position Independent Code generation.

Calling the C dynamic library (from C)
to create the executable you first compile the source file.
gcc -c call_fct.c
and the link the created code call_fct.o -L./ -lFct
the flag '-L' indicates where the library is to be found and flag '-l'secifies the library , without the prepending lib and file extension .so
executable call_dynamic is ready to run.

Runnung  C executable linked to a .so file.
But the shared library will not be found at runtime if its directory is not in the variable LD_LIBRARY_PATH (probably the case by default). Type the following line in the command shell:

if sh or bash shell:         export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
if csh or tcsh shell:        setenv LD_LIBRARY_PATH .:$LD_LIBRARY_PATH
In this example the local directory ('.') is added to the search. Mention in the first case that there is no space around the '=' sign.


Makefile
to create the library and to link a program with the library.
--- Makefile ------------------------------------------------------------------

# What is printed when typing 'make'
default:
    @echo \'make Lib\' to create the shared lib libFct.so
    @echo \'make ByLib\' to create call_dynamic, using shared lib
    @echo \'make Prog\' to create exec 'prog' (standalone)
    @echo \'make Clean\' to remove all .o, exec call, call_dynamic and libFct.so

# 'make Lib': Create the shared library (need Position Indep Code)
Lib:    fct.c
    gcc -fPIC -c fct.c
    gcc -shared -o libFct.so fct.o

# 'make ByLib': Create exec 'call_dynamic' with shared lib (not contained)
# in shell or in ~/.bashrc: export LD_LIBRARY_PATH=./:$LD_LIBRARY_PATH
ByLib:  call_fct.c libFct.so
    gcc -c call_fct.c
    gcc -o call_dynamic call_fct.o -L./ -lFct

# 'make Prog': Create a standalone 'prog' containing fct.o: './prog' to run
# This does not use the shared lib
Call: call_fct.c fct.c
    gcc -c fct.c
    gcc -c call_fct.c
    gcc -o prog fct.o call_fct.o

# 'make Clean': remove exec, .o and .so
Clean:
    rm *.o libFct.so call_dynamic prog

Source code example
We give in this section the source code of a C dynamic library made of fct.c and a calling program (fct_call.c).
--- fct.c ------------------------------------------------------------------------

// An example of functions for a dynamic library

#include <string.h>
#include <stdio.h>

// Open file 'filename'. Return file descriptor. Return name length by arg
FILE *FileOpen(char *filename, int *name_len)
{
    FILE *fd = fopen(filename, "rt");
    if (fd == NULL) { printf("Bad open '%s'
", filename); return(NULL); }
    *name_len = strlen(filename);
    return(fd);
}

// Give size of file specified by fd (file descriptor)
int FileSize(FILE *fd)
{
    fseek(fd, 0, SEEK_END); // Position file pointer at end of file
    return( ftell(fd) );    // return position in file (last char)
}
----- call_fct.c --------------------------------------------------------------

// Example calling functions of fct.c. (fct.h not created for compactness)
# include <stdio.h>

extern FILE *FileOpen(char *filename, int *name_len);
extern int   FileSize(FILE *fd);

int main(int argc, char *argv[])
{
    char *filename = "file.txt";
    int  name_len = 0;

    // We show that void *fd (instead of FILE *) compiles and works
    // We'll use this trick in Python (FILE not needed and too long to create)
    void *fd = FileOpen(filename, &name_len);
    printf("File '%s': name length = %d
", filename, name_len);

    int  size = FileSize(fd);
    printf("File size = %d
", size);
}
