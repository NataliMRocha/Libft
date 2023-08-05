# :books: Libft | 42 SP
- Actual Status : finished.
- Result        : evaluation in progress.

The libft (42 Library) is the first project in the software engineering curriculum at 42 São Paulo. The objective of the project is to create your first C library by re-creating functions from the standard C library. During the project, you will learn how these functions work, how to implement them, and how to use each one. To submit the project, you must create a Makefile that compiles your library without relinking.

Upon completing the mandatory part of the project, you are encouraged to do the bonus part, which involves learning about linked lists, how to create them, and how to manipulate them.

## 📝 Functions

| Function | Description |
| :------: | :---------: |
| ``ft_atoi`` | Converts the initial portion of the string pointed to by ``nptr`` to int |
| ``ft_bzero`` | Sets the first ``n`` chars of a string ``s`` to zero ``\0`` |
| ``ft_calloc`` | Allocates memory for an array of 'nmemb' elements of 'size' bytes, and set to zero. If 'nmemb' or 'size' is 0, then calloc returns either NULL, or a unique pointer value that can later be successfully passed to free. |
| ``ft_isalnum`` | Returns ``1`` if the input is a alphanumeric character from the ``ASCII`` table |
| ``ft_isalpha`` | Returns ``1`` if the input is a alphabetical character from the ``ASCII`` table |
| ``ft_isascii`` | Returns ``1`` if the input is in the ``ASCII`` table |
| ``ft_isdigit`` | Returns ``1`` if the input is a digit character from the ``ASCII`` table |
| ``ft_isprint`` | Returns ``1`` if the input is a printable character from the ``ASCII`` table |
| ``ft_itoa`` | Allocates with malloc and returns a string representing the integer received as an argument, negative numbers must be handled |
| ``ft_memccpy`` | Copies from one memory point to another, until the specified character is copied or until ``n`` bytes are copied |
| ``ft_memchr`` | Scans the initial ``n`` bytes of the memory area pointed to by ``s`` for the first instance of ``c`` |
| ``ft_memcmp`` | Compares the first ``n`` bytes, each interpreted as unsigned char, of the memory areas ``s1`` and ``s2`` |
| ``ft_memcpy`` | Copies ``n`` bytes from memory area ``src`` to memory area ``dest``, the memory areas must not overlap. |
| ``ft_memmove`` | Copies ``n`` bytes from memory area ``src`` to memory area ``dest`` n case of memory overlap, ``src`` will be copied to a temporary array and then to ``dst`` |
| ``ft_memset`` | Fills the first ``n`` bytes of the memory area pointed to by ``s`` with the int ``c`` |
| ``ft_putchar_fd`` | Prints a character to the given file descriptor |
| ``ft_putendl_fd`` | Prints a string followed by a new line ``\n`` to a given file descriptor |
| ``ft_putnbr_fd`` | Prints number to the given file descriptor |
| ``ft_putstr_fd`` | Prints string to the given file descriptor |
| ``ft_split`` | Allocates with malloc and returns an array of strings obtained by splitting ``s`` using the character ``c`` as a delimiter. The array must end with a NULL pointer |
| ``ft_strchr`` | Looks for the first occurrence of the character ``c`` in the string ``s`` |
| ``ft_strdup`` | Allocates with malloc and duplicate the contents of string ``s``|
| ``ft_striteri`` | Applies a function on each character of the string passed as argument |
| ``ft_strjoin`` | Allocates with malloc and returns a new string, which is the result of the concatenation of ``s1`` and ``s2`` |
| ``ft_strlcat`` | Appends the NUL-terminated string ``src`` to the end of ``dst``. It will append at most ``size - strlen(dst) - 1`` bytes NUL-terminating the result.|
| ``ft_strlcpy`` | Copies ``size - 1`` characters from the NUL-terminated string ``src`` to ``dst``, NUL-terminating the result |
| ``ft_strlen`` | Returns the length of the string, before the terminating null byte ('\0') can be found |
| ``ft_strmapi`` | Applies a function (mapping) to every element in a string |
| ``ft_strncmp`` | Compares only the first (at most) n bytes of two strings, ``s1`` and ``s2`` |
| ``ft_strnstr`` | Locates the first occurrence of the null-terminated string ``little`` in the string ``big``, where not more than len characters are searched. Characters that appear after a ``\0`` character are not searched |
| ``ft_strrchr`` | Looks for the last occurrence of the character ``c`` in the string ``s`` |
| ``ft_strtrim`` | Allocates with malloc and returns a copy of ``s1`` with the characters specified in ``set`` removed from the beginning and the end of the string |
| ``ft_substr`` | Allocates with malloc and returns a substring from the string ``s``. The substring begins at index ``start`` and is of maximum size ``len`` |
| ``ft_tolower`` | Convert uppercase letters to lowercase |
| ``ft_toupper`` | Convert lowercase letters to uppercase |

## :star: Bonus
For this part we implemented a struct defining the well-known linked lists
```C
typedef	struct	s_list
{
	void		*content;
	struct	s_list	*next;
}			t_list;
```

Bonus functions to implement

| Bonus Function | Description |
| :------------: | :---------: |
| ``ft_lstnew`` | Creates new node allocating with ``malloc`` |
| ``ft_lstadd_front`` | Adds new node at the beginning of the linked list |
| ``ft_lstsize`` | Returns number of elements of linked list |
| ``ft_lstlast`` | Retrieves last node of the list |
| ``ft_lstadd_back`` | Adds new node at the end of the linked list |
| ``ft_lstdelone`` | Deletes, frees, and applies function del to content of a given node |
| ``ft_lstclear`` | Deletes a given element and every element after that |
| ``ft_lstiter`` | Applies a function to the content of every node of the linked list |
| ``ft_lstmap`` | Applies function to a copy of the list, freeing when necessary |


## 🛠️ Usage

In order to use this static library in your project, you must download this repository into your pc and compile the library

``` shell
$> git clone https://github.com/NataliMRocha/Libft.git
$> cd Libft
$> make
$> make bonus
```

In your code, simply include its header:

``` C
#include "libft.h"
```

And, when compiling your code, add the required flags:

``` shell
$> -L ./libft -lft
```
