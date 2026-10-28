# Libft

A custom C library containing reimplementations of standard C library functions and additional utility functions.

## About

Developed as part of the 42 Core Curriculum, this project focuses on C fundamentals, pointers, memory management, and string manipulation.

## Contents

- Character checks and conversions
- Memory manipulation
- String manipulation
- Integer conversions
- File descriptor output functions
- Linked list operations
- Additional utility functions

## Compilation

```bash
make
```

This generates `libft.a`, a static library.

## Usage

Include the library header:

```c
#include "libft.h"
```

Compile your program from the project root:

```bash
cc -Wall -Wextra -Werror -Iinclude main.c -L. -lft -o program
```

## Note

This is an educational implementation of selected C library functions. It is not intended to replace the standard library.
