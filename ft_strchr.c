/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:17:26 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/20 14:52:32 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

// int	main (void)
// {
// 	char	*s = "Natali";
// 	char	*s2 = "Natali";
// 	int		letter2 = 'a';
// 	int		letter = 'a';
// 	char *result2 = strchr(s2, letter2);
// 	char *result = ft_strchr(s, letter);
// 	printf("Minha função: %s\n", result);
// 	printf("Função original: %s\n", result2);
// }