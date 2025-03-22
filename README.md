# libft

Biblioteca de funciones en C que recrea funcionalidades estándar.

## 📝 Descripción

`libft` es una biblioteca personalizada que implementa desde cero muchas de las funciones de la biblioteca estándar de C, además de otras funciones útiles. Este proyecto forma parte del plan de estudios de 42 y sirve como base para futuros proyectos.

### Categorías de funciones:

- **Manipulación de memoria**: `memset`, `memcpy`, `memmove`, `memchr`, `memcmp`, `bzero`, `calloc`
- **Manejo de cadenas**: `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`, `substr`, `strjoin`, `strtrim`, `split`
- **Conversión de tipos**: `atoi`, `itoa`
- **Comprobación de caracteres**: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
- **Salida a descriptores de archivo**: `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`
- **Manipulación de cadenas con funciones**: `striteri`, `strmapi`

## 🛠️ Compilación

```bash
make
```

Esto generará una biblioteca estática `libft.a` que puedes enlazar con tus programas.

Para limpiar los archivos objeto:
```bash
make clean
```

Para eliminar todos los archivos generados:
```bash
make fclean
```

Para recompilar:
```bash
make re
```

## 💻 Uso

### Inclusión en tu proyecto

1. Incluye el archivo de cabecera en tu código:
```c
#include "libft.h"
```

2. Compila tu programa enlazando con la biblioteca:
```bash
cc -Wall -Wextra -Werror tu_programa.c -L. -lft
```
## 🔍 Funciones implementadas

### Funciones de libc

- `ft_isalpha`: Verifica si un carácter es alfabético
- `ft_isdigit`: Verifica si un carácter es un dígito
- `ft_isalnum`: Verifica si un carácter es alfanumérico
- `ft_isascii`: Verifica si un carácter es ASCII
- `ft_isprint`: Verifica si un carácter es imprimible
- `ft_strlen`: Calcula la longitud de una cadena
- `ft_memset`: Llena memoria con un byte constante
- `ft_bzero`: Llena memoria con ceros
- `ft_memcpy`: Copia memoria de área a área
- `ft_memmove`: Copia memoria de área a área (seguro para solapamiento)
- `ft_strlcpy`: Copia cadenas con limitación de tamaño
- `ft_strlcat`: Concatena cadenas con limitación de tamaño
- `ft_toupper`: Convierte carácter a mayúscula
- `ft_tolower`: Convierte carácter a minúscula
- `ft_strchr`: Localiza la primera ocurrencia de un carácter en una cadena
- `ft_strrchr`: Localiza la última ocurrencia de un carácter en una cadena
- `ft_strncmp`: Compara dos cadenas hasta n caracteres
- `ft_memchr`: Localiza byte en bloque de memoria
- `ft_memcmp`: Compara bloques de memoria
- `ft_strnstr`: Localiza subcadena en cadena (limitada a n)
- `ft_atoi`: Convierte cadena a entero
- `ft_calloc`: Asigna memoria y la inicializa a cero
- `ft_strdup`: Duplica una cadena

### Funciones adicionales

- `ft_substr`: Extrae una subcadena de una cadena
- `ft_strjoin`: Concatena dos cadenas
- `ft_strtrim`: Elimina caracteres específicos del inicio y final de una cadena
- `ft_split`: Divide una cadena utilizando un carácter como delimitador
- `ft_itoa`: Convierte un entero a cadena
- `ft_strmapi`: Aplica una función a cada carácter de una cadena
- `ft_striteri`: Aplica una función a cada carácter de una cadena con su índice
- `ft_putchar_fd`: Escribe un carácter en un descriptor de archivo
- `ft_putstr_fd`: Escribe una cadena en un descriptor de archivo
- `ft_putendl_fd`: Escribe una cadena seguida de un salto de línea en un descriptor de archivo
- `ft_putnbr_fd`: Escribe un número en un descriptor de archivo

---

# libft

C function library that recreates standard functionalities.

## 📝 Description

`libft` is a custom library that implements from scratch many of the functions from the C standard library, as well as other useful functions. This project is part of the 42 curriculum and serves as a foundation for future projects.

### Function categories:

- **Memory manipulation**: `memset`, `memcpy`, `memmove`, `memchr`, `memcmp`, `bzero`, `calloc`
- **String handling**: `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`, `strdup`, `substr`, `strjoin`, `strtrim`, `split`
- **Type conversion**: `atoi`, `itoa`
- **Character checking**: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`
- **File descriptor output**: `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`
- **String manipulation with functions**: `striteri`, `strmapi`

## 🛠️ Compilation

```bash
make
```

This will generate a static library `libft.a` that you can link with your programs.

To clean object files:
```bash
make clean
```

To remove all generated files:
```bash
make fclean
```

To recompile:
```bash
make re
```

## 💻 Usage

### Including in your project

1. Include the header file in your code:
```c
#include "libft.h"
```

2. Compile your program linking with the library:
```bash
cc -Wall -Wextra -Werror your_program.c -L. -lft
```

## 🔍 Implemented functions

### Libc functions

- `ft_isalpha`: Checks if a character is alphabetic
- `ft_isdigit`: Checks if a character is a digit
- `ft_isalnum`: Checks if a character is alphanumeric
- `ft_isascii`: Checks if a character is ASCII
- `ft_isprint`: Checks if a character is printable
- `ft_strlen`: Calculates the length of a string
- `ft_memset`: Fills memory with a constant byte
- `ft_bzero`: Fills memory with zeros
- `ft_memcpy`: Copies memory from area to area
- `ft_memmove`: Copies memory from area to area (safe for overlapping)
- `ft_strlcpy`: Copies strings with size limitation
- `ft_strlcat`: Concatenates strings with size limitation
- `ft_toupper`: Converts character to uppercase
- `ft_tolower`: Converts character to lowercase
- `ft_strchr`: Locates the first occurrence of a character in a string
- `ft_strrchr`: Locates the last occurrence of a character in a string
- `ft_strncmp`: Compares two strings up to n characters
- `ft_memchr`: Locates byte in memory block
- `ft_memcmp`: Compares memory blocks
- `ft_strnstr`: Locates substring in string (limited to n)
- `ft_atoi`: Converts string to integer
- `ft_calloc`: Allocates memory and initializes it to zero
- `ft_strdup`: Duplicates a string

### Additional functions

- `ft_substr`: Extracts a substring from a string
- `ft_strjoin`: Concatenates two strings
- `ft_strtrim`: Removes specific characters from the beginning and end of a string
- `ft_split`: Splits a string using a character as delimiter
- `ft_itoa`: Converts an integer to string
- `ft_strmapi`: Applies a function to each character of a string
- `ft_striteri`: Applies a function to each character of a string with its index
- `ft_putchar_fd`: Writes a character to a file descriptor
- `ft_putstr_fd`: Writes a string to a file descriptor
- `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor
- `ft_putnbr_fd`: Writes a number to a file descriptor
