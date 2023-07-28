/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:29:15 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/28 16:18:31 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc_mem;
	size_t	total_size;

	total_size = nmemb * size;
	if ((nmemb == 0 || size == 0) || total_size / size != nmemb)
		return (malloc(0));
	alloc_mem = malloc(total_size);
	if (!alloc_mem)
		return (NULL);
	ft_bzero(alloc_mem, total_size);
	return (alloc_mem);
}
