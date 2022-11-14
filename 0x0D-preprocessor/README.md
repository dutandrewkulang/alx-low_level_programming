# Pre-precossor directives

We use `gcc -E` to stop compilation at the pre-processor stage

The C pre-processor (CPP) is not part of the compiler, but just a step executed before the source code is compiled.

**It's uses**
	1. replaces tokens with the text, insert content of other files into the source code.
	2. Removes comments from source code.

Directives are commands that tell the preprocessor to skip part of a file include another file, or define a constant or macro.

Directives begin with a sharp sign `#` 

- **Header files**

The `#include` directive tells the pre-processor to grab the text of a file and place it directly into the current file. Because such statements are placed at the top of a file, they were named `header files`

- **Constants**

``#define [identifier name] [value]``

whenever [identifier] shows up in the file, it will be replaced with [value]

```h
#define DUT (78)
```
we can than call ``DUT`` to access it's value `78`

```c
sum = DUT + 22;
```
The pre-processor will replace `DUT` with ``78``

```c
sum = 78 + 22
//100
```
**Some pre-defined macros**

| Macro | Specifier | Definition |
|-------| ----- | ------|
| ``__DATE__`` | %s | Print current date "MM DD YYYY" |
| ``__TIME__`` | %s | print current time "HH:MM:SS"|
| ``__FILE__`` | %s | print file name in which the program is being compiled in |
| ``__LINE__`` | %d | print line number in which the macro is called |
| ``__STDC__`` | %d | returns 1 if compiler supports ANSI standard |