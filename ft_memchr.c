/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:38:31 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/20 15:25:48 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	tofind;

	p = (unsigned char *)s;
	tofind = (unsigned char)c;
	while (n--)
	{
		if (*p == tofind)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	const void *s;
// 	char str[7] = "natali";
// 	s = &str;
// 	int c = 'l';
// 	size_t n = 5;
// 	const void *result = memchr(s, c, n);
// 	const void *result2 = ft_memchr(s, c, n);
// 	printf("A string a partir do char %c é %s\n", c, result);
// 	printf("A string a partir do char %c é %s\n", c, result2);
// }
