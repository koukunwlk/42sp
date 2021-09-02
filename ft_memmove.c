/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 18:52:08 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/02 13:20:04 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	if (dest == NULL && src == NULL && n)
		return (dest);
	d = dest;
	s = (char *)src;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}
