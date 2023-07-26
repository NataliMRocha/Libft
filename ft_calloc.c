/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:29:15 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/24 15:02:17 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc_mem;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (malloc (sizeof(char) * 1));
	total_size = nmemb * size;
	alloc_mem = malloc(total_size);
	if (alloc_mem == NULL)
		return (NULL);
	ft_bzero(alloc_mem, total_size);
	return (alloc_mem);
}
