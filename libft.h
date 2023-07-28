/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:11:17 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/28 17:03:35 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/**@brief Check if the int 'c' is an alphabetical character
 * from the ASCII table.
 * 
 * @param c a int
 * @return int '1' for true or int '0' for false.
 * */ 
int		ft_isalpha(int c);

/**@brief Checks if the int 'c' is a digit character from the ASCII table.
 * 
 * @param c a int
 * @return int '1' for true or int '0' for false.
*/
int		ft_isdigit(int c);

/**@brief Checks if the int 'c' is a alphanumeric character.
 * 
 * @param c a int
 * @return int '1' for true or int '0' for false.
*/
int		ft_isalnum(int c);

/**@brief Checks if the int 'c' is in the ASCII table.
 * 
 * @param c a int
 * @return int '1' for true or int '0' for false.
*/
int		ft_isascii(int c);

/**@brief Checks if the int 'c' is a printable character
 * (including space) in the ASCII table.
 * 
 * @param c a int
 * @return int '1' for true or int '0' for false.
*/
int		ft_isprint(int c);

/**@brief Calculates the length of the string pointed to by 's',
 * before the terminating null byte ('\0') can be found.
 * 
 * @param s as a true C string, terminated by '\0'
 * @return the number of chars in the string.
*/
size_t	ft_strlen(const char *s);

/**@brief fills the first 'n' bytes of the memory area
 * pointed to by 's' with the int 'c'.
 * 
 * @param s a sequential memory area
 * @param c char used to fill the bytes in 's'
 * @param n the number of bytes in 's' to fill with 'c'
 * @return a pointer to the memory area s.
*/
void	*ft_memset(void *s, int c, size_t n);

/**@brief Sets the first 'n' chars of a string 's' to zero ('\0').
 * 
 * @param s as a string
 * @param n the number of bytes to fill with '\0'
*/
void	ft_bzero(void *s, size_t n);

/**@brief copies 'n' bytes from memory area 'src' to memory
 * area 'dest'. The memory areas must not overlap.
 * 
 * @param dest destination memory area to received the copy of 'src'
 * @param src source memory area to be copy
 * @param n the amount of bytes in 'src' to be copied
 * @return a pointer to 'dest'.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**@brief copies 'n' bytes from memory area 'src' to memory
 * area 'dest' n case of memory overlap, 'src' will be copied
 * to a temporary array and then to 'dst'.
 * 
 * @param dest destination memory area to received the copy of 'src'
 * @param src source memory area to be copy
 * @param n the amount of bytes in 'src' to be copied
 * @return a pointer to 'dest'.
*/
void	*ft_memmove(void *dest, const void *src, size_t n);

/**@brief copies size - 1 characters from the NUL-terminated 
 * string 'src' to 'dst', NUL-terminating the result.
 * 
 * @param dst destination string to received the copy of 'src'
 * @param src source string to be copy
 * @param size the full size of the 'dst' buffer
 * @return the total length of the string they tried to create
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**@brief appends the NUL-terminated string 'src' to the end of 'dst'.
 * It will append at most size - strlen(dst) - 1 bytes, 
 * NUL-terminating the result.
 * 
 * @param dst destination string to received the copy of 'src'
 * @param src source string to be copy
 * @param size the full size of the 'dst' buffer
 * @return the total length of the string they tried to create
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**@brief convert lowercase letters to uppercase.
 * 
 * @param c a int
 * @return the converted letter, or 'c' if the conversion 
 * was not possible.
*/
int		ft_toupper(int c);

/**@brief convert uppercase letters to lowercase.
 * 
 * @param c a int
 * @return the converted letter, or 'c' if the conversion 
 * was not possible.
*/
int		ft_tolower(int c);

/**@brief returns a pointer to the first occurrence of the 
 * character 'c' in the string 's'.
 * 
 * @param s a string
 * @param c a char to be searched for in 's'
 * @return a pointer to the matched character or NULL if the 
 * character is not found. The terminating null byte is considered 
 * part of the string.
*/
char	*ft_strchr(const char *s, int c);

/**@brief returns a pointer to the last occurrence of the character 
 * 'c' in the string 's'.
 * 
 * @params a string
 * @param c a char to be searched for in 's'
 * @return a pointer to the matched character or NULL if the 
 * character is not found. The terminating null byte is considered 
 * part of the string.
*/
char	*ft_strrchr(const char *s, int c);

/**@brief compares only the first (at most) n bytes of two strings,
 * 's1' and 's2'.
 * 
 * @param s1 a string
 * @param s2 a string
 * @param the amount of bytes to compair
 * @return an integer less than, equal to, or greater than 
 * zero if s1 is found, respectively, to be less than, to match, 
 * or be greater than s2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**@brief scans the initial 'n' bytes of the memory area pointed to 
 * by 's' for the first instance of 'c'.
 * 
 * @param s the memory area to search
 * @param c a char to be search
 * @param n amount of bytes to scan
 * @return a pointer to the matching byte or NULL if the character
 * does not occur in the given memory area.
*/
void	*ft_memchr(const void *s, int c, size_t n);

/**@brief
 * 
 * @param
 * @param
 * @param
 * @return
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**@brief
 * @param
 * @return
*/
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**@brief
 * @param
 * @return
*/
int		ft_atoi(const char *nptr);

/**@brief
 * @param
 * @return
*/
void	*ft_calloc(size_t nmemb, size_t size);

/**@brief
 * @param
 * @return
*/
char	*ft_strdup(const char *s);

/**@brief
 * @param
 * @return
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**@brief
 * @param
 * @return
*/
char	*ft_strjoin(char const *s1, char const *s2);

/**@brief
 * @param
 * @return
*/
char	*ft_strtrim(char const *s1, char const *set);

/**@brief
 * @param
 * @return
*/
char	**ft_split(char const *s, char c);

/**@brief
 * @param
 * @return
*/
char	*ft_itoa(int n);

/**@brief
 * @param
 * @return
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**@brief
 * @param
 * @return
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**@brief
 * @param
 * @return
*/
void	ft_putchar_fd(char c, int fd);

/**@brief
 * @param
 * @return
*/
void	ft_putstr_fd(char *s, int fd);

/**@brief
 * @param
 * @return
*/
void	ft_putendl_fd(char *s, int fd);

/**@brief
 * @param
 * @return
*/
void	ft_putnbr_fd(int n, int fd);

#endif