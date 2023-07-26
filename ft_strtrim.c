/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:37:01 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/25 15:33:16 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_char(char const set, char const *s1)
{
	while (*s1)
	{
		if (*s1 == set)
			return (1);
		s1++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char const	*str;

	start = 0;
	while (s1[start] && ft_check_char(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check_char(s1[end - 1], set))
		end--;
	str = (char *)malloc(end - start + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1 + start, end - start + 1);
	return (str);
}
