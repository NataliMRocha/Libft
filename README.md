# :books: Libft | 42 SP
- Actual Status : finished.
- Result        : evaluation in progress.

The libft (42 Library) is the first project in the software engineering curriculum at 42 São Paulo. The objective of the project is to create your first C library by re-creating functions from the standard C library. During the project, you will learn how these functions work, how to implement them, and how to use each one. To submit the project, you must create a Makefile that compiles your library without relinking.

Upon completing the mandatory part of the project, you are encouraged to do the bonus part, which involves learning about linked lists, how to create them, and how to manipulate them.

## 📝 Functions

| Function | Description |
| :------: | :---------: |
| ``ft_atoi`` | Reads a String, and, after ignoring spaces with ``ft_isspace``, saves the string into an integer |
| ``ft_bzero`` | Writes ``n`` zeroes to the string ``s`` |
| ``ft_calloc`` | Reserves ``x`` blocks of ``y`` bits of memory |
| ``ft_isalnum`` | Returns ``1`` if the input is a number or a letter in the ``ASCII`` table |
| ``ft_isalpha`` | Returns ``1`` if the input is a letter in the ``ASCII`` table |
| ``ft_isascii`` | Returns whether or not a value belongs to the ``ASCII`` table |
| ``ft_isdigit`` | Returns ``1`` if the input is a number in the ``ASCII`` table |
| ``ft_isprint`` | Returns whether a character is printable |
| ``ft_itoa`` | Saves the given number as a string (char array) |
| ``ft_memccpy`` | Copies from one memory point to another, until the specified character is copied or until ``n`` bytes are copied |
| ``ft_memchr`` | Looks for a matching character inside a part of the memory |
| ``ft_memcmp`` | Compares two parts of memory, returning ``0`` if they're the same, or else a nonzero value |
| ``ft_memcpy`` | Copies from one part of memory to another, ignoring possible overlaps |
| ``ft_memmove`` | Copies from one part of memory to another, preventing possible overlaps |
| ``ft_memset`` | Assigns a character ``n`` times to a part of the memory |
| ``ft_putchar_fd`` | Prints a character to the given file descriptor |
| ``ft_putendl_fd`` | Prints a string followed by a new line ``\n`` to a given file descriptor |
| ``ft_putnbr_fd`` | Prints number to the given file descriptor |
| ``ft_putstr_fd`` | Prints string to the given file descriptor |
| ``ft_split`` | Splits a string according to a given separator character |
| ``ft_strchr`` | Looks for a specific character inside a given string |
| ``ft_strdup`` | Saves enoug space and duplicates a string |
| ``ft_striteri`` | Applies a function on each character of the string passed as argument |
| ``ft_strjoin`` | Concatenates two strings allocating enough space first |
| ``ft_strlcat`` | Concatenates two strings ensuring it ends with ``\0`` |
| ``ft_strlcpy`` | Copies ``n - 1`` bytes from a source string to a destination string |
| ``ft_strlen`` | Returns length of a string |
| ``ft_strmapi`` | Applies a function (mapping) to every element in a string |
| ``ft_strncmp`` | Compares two strings up to the n-th character |
| ``ft_strnstr`` | Tries to find a substring (``needle``) in a second string (``haystack``) before the n-th char is reached |
| ``ft_strrchr`` | Looks for a given character in a string, reading it from back to front |
| ``ft_strtrim`` | Removes occurrences of characters in a string from the start and end of another one |
| ``ft_substr`` | Copies from the n-th char of a string |
| ``ft_tolower`` | Makes every uppercase character in a string lowercase |
| ``ft_toupper`` | Makes every lowercase character in a string uppercase |

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
