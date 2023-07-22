/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:21:27 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/22 20:41:39 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*strcp;

	len = ft_strlen(s);
	i = 0;
	strcp = (char *)malloc(sizeof(char) * (len + 1));
	if (strcp == NULL)
		return (NULL);
	while (i < len + 1)
	{
		strcp[i] = s[i];
		i++;
	}
	return (strcp);
}
