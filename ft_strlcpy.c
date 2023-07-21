/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:34:42 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/21 14:55:01 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <bsd/string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char dst[20];
// 	char dst2[20];
// 	char *src2 = "Natali é linda";
// 	char *src = "Natali é linda";
// 	size_t s = 5;
// 	size_t s2 = 5;
// 	int result = ft_strlcpy(dst, src, s);
// 	int result2 = strlcpy(dst2, src2, s2);
// 	printf("String final: %s\n", dst);
// 	printf("Tamanho string cpy: %d\n", result);
// 	printf("String final função original: %s\n", dst2);
// 	printf("Tamanho string cpy f original: %d\n", result2);
// }
