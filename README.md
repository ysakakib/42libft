*This project has been created as part of the 42 curriculum by yusakaki.*

# libft

## Description

libft is a custom C standard-library-style toolkit built as a static library named `libft.a`.
The goal of the project is to recreate a useful subset of libc functions and to build a reusable foundation for later 42 projects.

This library includes basic character checks, memory utilities, string manipulation, conversion helpers, output helpers, and a bonus linked-list API.
It is designed to behave predictably under the 42 constraints: strict compilation flags, no hidden dependencies, and clean memory handling.

### Library contents

Core functions provided by this project:

- Character classification and conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- String utilities: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- Memory utilities: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Conversion and numeric output: `ft_atoi`, `ft_itoa`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

Bonus linked-list functions:

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

### Compilation

Build the static library from the project root:

```bash
make
```

This produces `libft.a`.

### Cleaning

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Rebuild everything from scratch:

```bash
make re
```

### Usage

Include `libft.h` in your C project and link against `libft.a`.
For example:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

If your project also needs the bonus linked-list API, build the library with the bonus files already present in this repository structure and include the same header.

## Resources

- `man 3` pages for standard C library behavior such as `strlen`, `strlcpy`, `memcpy`, `calloc`, and related functions
- The GNU C Library documentation: https://www.gnu.org/software/libc/manual/
- cppreference C language reference: https://en.cppreference.com/w/c
- 42 subject documentation and campus guidelines for `libft`
- 42 GitBook notes and community writeups on implementation details for string and memory functions

### AI usage

AI was used to draft and structure this README, based on the repository layout, Makefile, and public header file.
It was also used to ensure the document covers the required sections, lists the library functions clearly, and presents the build and usage instructions in a format suitable for 42 review.
