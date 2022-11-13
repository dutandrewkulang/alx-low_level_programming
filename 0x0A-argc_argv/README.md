# argc and argv

argc and argv are used in C to interact with the main function which is the base of every C file.

``argc`` -> argument count: As the name implies it counts and returns the result.

``argv[]`` -> an array containing all the arguments passed into the main function at run time. 

lets take an example.

```c
// main.c
#include <stdio.h>

int main(void)
{
printf("Hello world\n");
return (0);
}
```

- Compilation

As you can see above that was our structure on a basic c file. To run it

```sh
$ gcc main.c -o main
```
- Run
```sh
$ ./main
```
To run a C file certain arguments are given to the gcc compiler, these arguments will directly be applied on the  ``main()`` function.

Lets advance our program a little bit

```c
// main.c
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The amount of arguments counted by argc are %d\n", argc);
    return (0);
}
```
```sh
$ gcc main.c -o main
```
```sh
$ ./main
```
# result
```sh
$ The amount of arguments counted by argc are 1
```
<br> *Why is the reuslt 1?* As you might have learnt that `./main` is the arguement passes to so it is treated as the the argument. 

The file name is the the first argument given to be able to execute the program 

```sh
./main Dut Kulang " A L X"
```
The amount of arguments counted by argc are 4. note that i used double quotes around `"A L X"` so its treated as one argument.

<br>

# argv[]
argv -> an array of strings arguments passed to the ``main()`` function.

This is holds all the arguments passed as strings in an array. Since argv is an array to print all the arguments you must use a loop. 



```c
// main.c
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("The amount of arguments counted by argc are %d\n", argc);
    
    int i;
    for (i = 0; i < argc)
    {
    printf("At postion argv[%d] = %s\n", i, argv[i]);
    }
    return (0);
}
```
```sh
$ gcc main.c -o main
```
```sh
$ ./main 
```

```sh
The amount of arguments counted by argc are 1
At postion argv[0] = ./main
```

- Now lets run it with even more arguments
```sh
./main Dut 123 "A L X"
The amount of arguments counted by argc are 4
At postion argv[0] = ./main
At postion argv[1] = Dut
At postion argv[2] = 123
At postion argv[3] = A L X
```

# Unused variables in C 

sometimes certain variable are delcleared to be used else where but not necessary in the source, gcc compiler will raise issues if you declear a variable and not used, this is because C is memory minded, i.e how do you manage and declearing an unused variable is a waste of memory.

we used the unused attribute to over come this compiler warning message

`data_type name __attribute__((unused)) variable_name`

```c
void sum(int __attribute__ ((unused)) x, int y)

```

Above we state to gcc compiler that variable `x` might `not` be unused in the function but it's was intensional

Example 2

```C
#include <stdio.h>
```
