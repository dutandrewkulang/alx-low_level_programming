# File Input Ouput in C

file descriptors are integers that represent open files in Unix-like operaring systems. They are used to identify and access files by the operating system and by the application.

When a program opens a file, the operating system assigns a unique file descriptor to the file, which can then be used to read and write to the file.

     **Table repesenting the file descriptors in unix like systems**

| Integer value | Name | <unistd.h> symbolic constant | <stdio.h> file stream |
|-------------------|----------|----------------------------------|---------------------------|
| 0 | Standard input | STDIN_FILENO | stdin |
|1| Standard output|STDOUT_FILENO| stdout|
|2| Standard error|STDERR_FILENO|stderr|


O_RDONLY: This flag opens the file for reading only

O_WRONLY: This flag opens the file for writing only

O_RDWR: This flag opens the file for both reading and writing.

O_CREAT: This flag can be used incombination with `O_WRONLY` and `O_RDWR` to create a file if it does not exist.

file in C

When we run our program, sometimes we want the results of the program to stored some where on the computer. By default the program stores output on the `RAM` which once the computer is powered off loses all data.

C has functionalities that allows programs to directly store information on `computer disk`

```c
#include <stdio.h>

int main()
{
     FILE *fptr;
     
     fptr = fopen("filename", "mode");
     /*
     
     manippulation code goes here
     
     */
     fclose(fptr);
     return 0;
}
```