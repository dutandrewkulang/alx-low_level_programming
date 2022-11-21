# Function pointers in C

A function pointer is a type of pointer that points to the memory address of a function.

Example
<hr>

`fun.c`

`C

#include <stdio.h>

void func(int a)
{
printf("The value of a is %d\n", a);
}

int main()
{
void (*ptr_func)(int) = &fun;
/*
 * (*ptr_func) is a pointer to a function that takes in one integer argument.
 * (*ptr_func) is passed the memory address of func.
 */
return (0);
}

`

