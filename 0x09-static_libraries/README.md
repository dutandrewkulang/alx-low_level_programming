# Static libraries

A static library is a collection of object code files in one archive file that can be shared by programs.

Static library is made when object code ``.o`` files are linked together to form an archive ``.a`` file which can be used in any program that one of the functions in these file is used.  

**Example.** 

Files used for basic C operation

```sh
ls
add.c sub.c mult.c div.c
```
**Create object files for the files**

```C
gcc -c *.c
```

