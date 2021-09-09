/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:42:38 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/09 15:03:53 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if(s2 == '\0')
		return ((char *)s1);
	while (s1[i] != 0 && i < n)
	{
		j = 0;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (s2[j] == 0)
			return ((char *)s1 + (i - j));
		i++;
	}
	return (0);
}
