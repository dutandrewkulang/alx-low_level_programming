# Static libraries

A static library is a collection of object code files in one archive file that can be shared by programs.

Static library is made when object code ``.o`` files are linked together to form an archive ``.a`` file which can be used in any program that one of the functions in these file is used.

**Example.** 

Files used for basic C operation.

- Prototype declaration

<hr>

```main.h```

```h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void add(int n, int m);
void sub(int n, int m);
void mult(int n, int m);
void div(int n, int m);

#endif
```
<hr>

- ``Add.c``

```C
/**
 * Add - Performs addition on two numbers
 * @n: integer variable
 * @m: integer variable
*/
void Add(int n, int m)
{
	printf("%d + %d = %d\n", n , m , n + m);	
}
```

```sh
ls
add.c sub.c mult.c div.c
```

**Create object files for the files**

```sh
gcc -c *.c
```

OR

```sh
gcc -c all_your_file_names.c
#List all your file name gcc -c add.c sub.c div.c mult.c but it is stressful
```
The above command will create co-responding object file names ``file.c`` -> ``file.o`` there is no need to specify the output file names

``-c`` -> Stop the compiling after the assembly stage. Translate ``.c`` to ``.o``


*Now the object files have been created*

```sh
ls 
add.c add.o sub.c sub.o mult.c mult.o div.c div.o
```
**Create the archive file**

Now that we have the object files, the must be <b><ins>linked</ins></b> into an archive file with the use of ``ar``by the link forming one large ``.a`` file.

The output will be a pre-compiled object code file.

```sh
ar -rc liboperators.a *.o
```
By conversion your archive file should file name should start with `lib` followed by the name. Example ```liboperators``` "library for operators"

``-rc`` flags -> ``recursively create`` the archive


**Indexing the library**

``nw``
``ranlib``

Indexing helps in sorting the functions order of their call.

if a function is called before it is declared that will cause an error of ```unknown function``` so indexing makes sure that that functions declarations are before function calls.

```sh
$ ranlib liboperators.a
```

```sh
nw liboperators.a
```

**Letting the compiler know where to find the archieved operators library**

```main.c```

```c
#include <stdio>
#include "main.c"
/**
 * main - Perform basic calculations
 * return: returns zero if the program ran successfully
 *
*/
int main(void)
{
	add(2,3);
	sub(20,35);
	mult(4,3);
	div(14,7);

	return (0);
}
```

```sh
$ gcc  main.c -L. liboperators.a -o result 
```

``-L.`` -> L dot: Locate the library file inside the current directory

``-o`` -> Save the output inside result. result will be an executable file 
