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

Now that we have the object files, the must be ~linked~ into an archive file with the use of ``ar``
