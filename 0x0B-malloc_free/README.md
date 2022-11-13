# Automatic memory allocation & malloc (Dynamic memory allocation)

- Automatic memory allocation

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

- Dynamic memory allocation (malloc)

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
