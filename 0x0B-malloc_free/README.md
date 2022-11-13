# Automatic memory allocation & malloc (Dynamic memory allocation)

- <ins>Automatic memory allocation</ins>

When we declare a variable or use strings with double quotes `""` the program automatically takes care of the memory allocation.

<hr>

main.c

```c
#include <stdio.h>

void main(unsigned int x, unsigned int y)
{
	int n;
	char c;
	int *ptr;
	char array[3];

}
```

<hr>

In the above example, the program arguments and local variables will be stored automatically in memory when the function is called.

So the program reserves space and uses it without you having to think about it. This memory can be `read` to and `written` to. Immediately the program finishes execution this memory is <ins>freed</ins>

<hr>

## What is the difference between automatic memory allocation and Dynamic memory allocation

```txt
`automatic memory allocation`
Lets say we have thrown party, and assume that that 50 only people will turn up, so we prepare 50 plates of food.

if more than 50 people show up then other people would miss food
or if say 8 people turn up, then 42 plates have been wasted (if no food killers are among them)
```
```txt
`Dynamic memory allocation`
Here we first wait for the people to show up and we prepare food according to their number
Here we able to adjust and prevent wastage of resource and also ensuring that no visitor misses food
```

- <ins>Dynamic memory allocation (malloc)</ins>

`malloc` is a function used to allocate certain amount of memory to a program during execution aka run time.

What malloc is basically request for a memory from heap when its request is granted the operation system  will reserve the requested amount of memory, and mallock return a pointer to the reserved space.

**When we are done with the use of the requested memory, we must return it back to the operating system by calling the `free` function**

protype: `void *malloc(size_t size);`

`void` means that the pointer can be any datatype that you want
`size` means the number of bytes you need to be allocated.

**malloc is provided by the stdlib** ensure to include `#include <stdlib.h>`

<hr>

```C
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Understanding malloc
 * Return: 0
*/

int main(void)
{
	char *str;

	str = malloc(sizeof(char) * 4);

	str[0] = 'D';
	str[1] = 'u';
	str[2] = 't';
	str[3] = '\0';

	printf("%s\n", str);
	
	return (0);
}
```
```sh
gcc main.c -o main
./main
#result
Dut
```
Above malloc is used to allocate 4 bytes of memory space which we then fill with characters.

`sizeof` operator is very helpful here as it is what we use to tell the size of the datatype since on different machines datatypes are not the same size. This makes our program portable. on 64-bits machines our program will allocate 4bytes since `char` takes up 1byte

<hr>

`main2.c`

```C
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Understanding malloc and free
 * Return: 0
*/

int main(void)
{
	char *tab;

	tab = malloc(sizeof(*tab) * 3);

	tab[0] = 98;
	tab[1] = -1024;
	tab[2] = 402;
	

	printf("%d, "%d, "%d\n", tab[0], tab[1], tab[2]);
	
	return (0);
}
```
```sh
gcc main2.c -o main2
./main2
#Result
98, -1024, 402
```
malloc will create memory space for 3 integers

Again `sizeof` will ensure portability of your program a cross diiferent machines since ``int`` is represented differently on `64-bits` and `32-bits` computers

``*tab`` points to integers, so on 64-bits machines int = 4bytes so 4*3 = `12bytes` will be reserved.

<hr>

**However**

since automatic allocation also frees the space, malloc does not do so, it must be told to do so, but the use `free`

<hr>

`main3.c`

```C
#include <stdio.h>
#include <stdlib.h>

/**
 * sum - Adds 3 integers and prints their sum
 *@a: first integer
 *@b: second integer
 *@c: third integer
 * Return: nothing
 */

void sum(int a, int b, int c)
{
	int *m;
	int result;

	m = malloc(sizeof(*m) * 3);

	m[0] = a;
	m[1] = b;
	m[2] = c;

	result = m[0] + m[1] + m[2];

	printf("%d + %d + %d = %d\n", m[0] + m[1] + m[2], result);
}
/**
 * main - understanding malloc and free 
 *Return: 0
 */

int main(void)
{
	sum(98, 402, -1024);
	return (0);
}
```

<hr>

```sh
gcc main3.c -o main3
#Result

```

The above will cause memory leak of unused memory

- <ins>Free</ins>

Though using `malloc`` makes your program portable, memory management is left in your hands.

       1. You will need to keep track of all addresses of allocated memory (variable of type pointer)
       2. You will have to deallocate every memory space you previously allocated yourself.

Failure to do so, your program can run out of space, or the operating system will kill the programm as it's still running

<hr>

`killme.c`

```C
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Understanding malloc and free
 * Return: 0.
*/

int main(void)
{
	while (1)
	{
		malloc(sizeof(char) * 1024);
	}
	return (0);
}
```

```sh
gcc kill.c -o killme
./killme
#result
Killed
```