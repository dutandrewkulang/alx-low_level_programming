# struct and typedef

Structure/ struct is a composite data type declaration that defines a physically grouped list of variables to be accessed via a single pointer or by the struct declared name which returns the same address.

The struct data type can contain other data types, so it is used for mixed data type records such as `hard drive directory entry` (file length, name, extension, pysical address etc)

The Struct directly references `a contiguous block of phyiscal memory` usually delimitted (sized) by the word length boundaries.

Being a block of contiguous memory, each field within a struct is located at a certain fixed offset from the start.

Because the contents of the a struct are stored in contiguous memory, the `sizeof` operator must be used to get the

<ins>Declaration</ins>

```C
struct tag_name {
       type member1;
       type member2;

       /* declare as many members as desired, but the entire structure size must be known to the compiler*/
};
```

# typedef

It is used to create an additional name (alias) for another data type, but does not create a new type.
