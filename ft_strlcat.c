/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:37:06 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/08/21 15:59:43 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char	*s;
	size_t	len_dest;
	size_t	res;
	size_t	len_src;
	size_t	i;

	s = (char *)src;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(s);
	res = 0;
	i = 0;
	if (n > len_dest)
		res = len_src + len_dest;
	else
		res = len_src + n;
	while (s[i] && (len_dest + 1) < n)
	{
		dest[len_dest] = s[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (res);
}
