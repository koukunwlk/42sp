/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:32:35 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/08/23 15:41:35 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*pointer;

	pointer = (char *)s;
	while (*pointer && n)
	{
		if (*pointer == c)
		{
			return (pointer);
		}
		pointer++;
		n--;
	}
	if (*pointer == '\0' && c == '\0' && n == '\0')
	{
		return (pointer);
	}
	return (0);
}
