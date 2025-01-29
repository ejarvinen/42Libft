# 42Libft: My First C Library
## Overview
**Libft** is a project that involves creating a custom C library containing a collection of essential functions that will be useful for future C programming assignments. By implementing these functions, I have gained a deeper understanding of standard C library functions and memory management.

## Features
### Mandatory Features
- **Standard Library Implementations**:
  - Reimplementation of standard `libc` functions (e.g., `strlen`, `memset`, `strchr`).
  - Functions for character classification (`isalpha`, `isdigit`, etc.).
  - Memory manipulation functions (`memcpy`, `memmove`, etc.).
- **Additional Utility Functions**:
  - String manipulation (`ft_substr`, `ft_strjoin`, `ft_strtrim`).
  - Number to string conversion (`ft_itoa`).
  - String iteration and transformation (`ft_strmapi`, `ft_striteri`).
  - File descriptor-based output (`ft_putchar_fd`, `ft_putstr_fd`, etc.).

### Bonus Features
- **Linked List Manipulation**:
  - Creating and managing linked lists (`ft_lstnew`, `ft_lstadd_front`, etc.).
  - Iterating and modifying linked lists (`ft_lstiter`, `ft_lstmap`).
  - Clearing and freeing list nodes (`ft_lstdelone`, `ft_lstclear`).

## Prerequisites
- **C Compiler**: Ensure a compatible compiler (e.g., gcc) is installed.
- **Makefile**: Provided for efficient compilation.

## Setup and Usage
### Installation
1. Clone this repository:
```
git clone https://github.com/ejarvinen/42Libft.git
cd 42Libft
```
2. Build the library (**without** bonus features):
```
make
```
3. OR build the library (**with** bonus features):
```
make bonus
```
### Usage
To use `libft.a` in your project:
```
gcc -Wall -Wextra -Werror your_program.c -L. -lft -o your_program
```
## Development Guidelines
- **Norm Compliance**: Follows the 42 coding norm.
- **Memory Management**: Properly frees all heap-allocated memory to avoid leaks.
- **Error Handling**:
  - Ensures functions return expected outputs.
  - Handle invalid inputs gracefully.

## File Structure
- **Makefile**: Handles compilation and cleaning tasks.
- **Source Files**: Includes `.c` and `.h` files for implementation.
- **Library Archive**: `libft.a` for linking with other projects.

## Example Usage
```
#include "libft.h"
#include <stdio.h>

int main() {
    char *str = ft_strdup("Hello, Libft!");
    printf("%s\n", str);
    free(str);
    return 0;
}
```
