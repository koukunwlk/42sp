/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:10:46 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/06 17:56:12 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	size_t	size;
	char	*str;

	size = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	str = (char *)ft_calloc(1, size);
	if (str == 0)
		return (0);
	ft_strlcat(str, s1, size);
	ft_strlcat(str, s2, size);
	return (str);
}
