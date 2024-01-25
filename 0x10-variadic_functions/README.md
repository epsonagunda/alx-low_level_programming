#0x10. C - Variadic functions
Variadic Functions - a syntax for declaring a function to take a variable number or type of arguments
Why Variadic Functions are Used:
-       function can handle as many arguments as the caller chooses to pass.
How Variadic Functions are Defined and Used
-       Define the function as variadic, using an ellipsis (‘…’) in the argument list
-       Declare the function as variadic, using a prototype with an ellipsis (‘…’), in all the files which call it
-       Call the function by writing the fixed arguments followed by the additional variable arguments
Syntax for Variable Arguments
int
func (const char *a, int b, …)
{
  …
}

