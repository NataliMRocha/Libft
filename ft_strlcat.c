/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 19:04:02 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/20 12:23:48 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (size > dst_len + 1)
	{
		while (src[i] && (dst_len + 1 + i) < size)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[dst_len + i] = '\0';
	if (size < dst_len)
		return (size + src_len);
	else
		return (dst_len + src_len);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int main()
// {	char dest[11]= "Hello";
// 	char src[6]= " Word";
// 	char dest2[11]= "Hello";
// 	char src2[6]= " Word";
// 	size_t size = 11;
// 	printf("String original: %s\n", dest);
// 	printf("String a ser concatenada: %s\n", src);
// 	size_t result = ft_strlcat(dest, src, size);
// 	printf("String resultante: %s\n", dest);
// 	printf("Comprimento total: %zu\n", result);
// 	size_t result2 = strlcat(dest2, src2, size);
// 	printf("Comprimento total na função original: %zu\n", result2);
// 	return(0);
// }