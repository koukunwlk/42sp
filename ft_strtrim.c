/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:26:40 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/09 19:20:31 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(const char *s1, char const *set)
{
	size_t		end;
	char		*ptr;
	int			len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	len = ft_strlen(s1) - end;
	ptr = ft_calloc(1, len);
	if (ptr == NULL)
		return(NULL);
	ptr = ft_substr((char *)s1, 0, end + 1);
	return (ptr);
}
