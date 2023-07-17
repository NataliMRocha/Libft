/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:23:10 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/17 20:05:51 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	unsigned int	i;
	uint8_t			*b;

	i = 0;
	b = (char *) s;
	while (i < n)
	{
		b[i] = c;
		i++;
	}
	return ((void *) b);
}
