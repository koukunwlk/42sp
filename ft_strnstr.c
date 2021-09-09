/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:42:38 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/09 16:25:43 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		needle_len;

	if(needle[0] == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len)
	{
		if(ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
/* {
	size_t	i;
	size_t	j;
	int		

	i = 0;
	if(s2[0] == '\0')
		return ((char *)s1);
	
	while (s1[i] != 0 && n)
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
		n--;
	}
	return (0);
}
 */