# malloc (memory allocation)

`malloc` is a function used to allocate certain amount of memory to a program during execution aka run time.

What malloc is basically request for a memory from heap when its request is granted the operation system  will reserve the requested amount of memory, and mallock return a pointer to the reserved space.

**When we are done with the use of the requested memory, we must return it back to the operating system by calling the `free` function**
