#0x0D. C - Preprocessor

object-like Macros - is a simple identifier which will be replace by a code fragment.
are used to give symbolic names to numeric constants.
#define BUFFER_SIZE 1024
#DEFINE - directive
BUFFER_SIZE - expansion/replacement list

C statement 
foo = (char *) malloc (BUFFER_SIZE);

C preprocessor will recognize and expand the macro BUFFER_SIZE.
 foo =(char *) malloc (1024);

by using backslash-newline you can define mutiple lines.

#define NUMBERS 1, \
                     2, \
                     3
     int x[] = { NUMBERS };
          ==> int x[] = { 1, 2, 3 };
consequence of this is surprising line numbers in error messages

 Macro Arguments

Function-like macros can take arguments, just like true functions. 
To define a macro that uses arguments, you insert parameters between the pair of parentheses, separated by commas and optionally whitespace.

macro that computes the minimum of two numeric values

#define min(X, Y)  ((X) < (Y) ? (X) : (Y))
       x = min(a, b);          ==>  x = ((a) < (b) ? (a) : (b));
       y = min(1, 2);          ==>  y = ((1) < (2) ? (1) : (2));
       z = min(a + 28, *p);    ==>  z = ((a + 28) < (*p) ? (a + 28) : (*p));


For example, min (min (a, b), c) is first expanded to

       min (((a) < (b) ? (a) : (b)), (c))
and then to

     ((((a) < (b) ? (a) : (b))) < (c)
      ? (((a) < (b) ? (a) : (b)))
      : (c))


The C Preprocessor
modifies a source code file before handing it over to the compiler.


three uses of the preprocessor-
   directives 
   constants 
   macros
Directives are commands that tell the preprocessor to skip part of a file, include another file, or define a constant or macro.

Constants
#define [identifier name] [value]
identifier name will be replace by value

#define PI_PLUS_ONE (3.14 + 1) - paratheses are used to prevent any operation issue that may destory the meaning of our code

Conditional Compilation

#if, 
#elif, 
#else, 
#ifdef, and 
#ifndef.
