/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:11:16 by namoreir          #+#    #+#             */
/*   Updated: 2023/07/20 14:54:40 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && n--)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// int main (void)
// {
// 	char *s1 = "Natali é linda";
// 	char *s2 = "Natali é gata";
// 	size_t count = 15;
// 	int result = ft_strncmp(s1, s2, count);
// 	int result2 = strncmp(s1, s2, count);
// 	printf("Resultado minha função: %d\n", result);
// 	printf("Resultado f original: %d\n", result2);
// }