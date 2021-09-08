/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:32:35 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/08 17:14:38 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*pointer;

	pointer = s;
	if (*pointer == '\0' || n == 0)
	{
		return ((char *)pointer);
	}
	while (n)
	{
		if (*pointer == c)
		{
			return ((char *)pointer);
		}
		pointer++;
		n--;
	}
	return (NULL);
}
