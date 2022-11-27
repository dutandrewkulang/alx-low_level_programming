# struct and typedef

Structure/ struct is a composite data type declaration that defines a physically grouped list of variables to be accessed via a single pointer or by the struct declared name which returns the same address.

The struct data type can contain other data types, so it is used for mixed data type records such as `hard drive directory entry` (file length, name, extension, pysical address etc)

The Struct directly references `a contiguous block of phyiscal memory` usually delimitted (sized) by the word length boundaries.

Being a block of contiguous memory, each field within a struct is located at a certain fixed offset from the start.

Because the contents of the a struct are stored in contiguous memory, the `sizeof` operator must be used to get the

<ins><b>Declaration</b></ins>

```C
struct tag_name {
       type member1;
       type member2;

       /* declare as many members as desired, but the entire structure size must be known to the compiler*/
};
```

<ins><b>Declaring structure variables</b></ins>

There are two ways of declaring structures, either along with structure definition or after the structure is defined

- 1. Along structure definition

```c
struct Student
{
	char *name;
	int age;
	char sex;
}student1, student2;
```
- 2. After structure definition

```c
struct Student
{
	char *name;
	int age;
	char sex; 
};

struct Student student1, student2; 
```
However, you are required to use the second (2<sup>nd</sup>) method for structure variable declaration. The first(1<sup>st</sup>) option has limitations.

# typedef

It is used to create an additional name (alias) for another data type, but does not create a new type.

<hr>

```typedef1.c```

```C
typedef unsigned char byte;

/* unsigned char can be represented by calling byte
 * 
*/
int main(void)
{
	byte c;
	c = 200;
	return (0);
}

```
```typedef2.c```

```C
#include <stdio.h>
#include <string.h>

struct Computer
{
	char *name;
	double price;
	char *make;
};

typedef struct Computer PC
/**
 * Above struct Computer has been aliased using typedef as PC
 * So instead of calling Computer you can use PC
*/
int main(void)
{
	PC p1, p2;
	strcpy = (p1.name, "MacBook pro");
	p1.price = 3599.9; // USD
	printf("%s costs %d on e-suki\n");
}
```
