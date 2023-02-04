# File Input Ouput in C

file
| Integer value | Name | <unistd.h> symbolic constant | <stdio.h> file stream |
|-------------------|----------|----------------------------------|---------------------------|
| 0 | Standard input | STDIN_FILENO | stdin |
|1| Standard output|STDOUT_FILENO| stdout|


O_RDONLY: This flag opens the file for reading only

O_WRONLY: This flag opens the file for writing only

O_RDWR: This flag opens the file for both reading and writing.

O_CREAT: This flag can be used incombination with `O_WRONLY` and `O_RDWR` to create a file if it does not exist.