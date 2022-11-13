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
#include <stdlib>

/**
 * main - Understanding malloc
 * Return: 0
*/

int main(void)
{
	char *str;

	str = malloc(sizeof(char) * 3);

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

