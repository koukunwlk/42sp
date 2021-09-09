/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:26:40 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/09 19:51:55 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

/* char	*ft_strtrim(const char *s1, char const *set)
{
	size_t		end;
	size_t		ini;
	size_t		i;
	char		*ptr;

	ini = 0;
	while (s1[ini] && ft_strchr(set, s1[ini]))
		ini++;
	end = ft_strlen(s1);
	while (end > ini && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = ft_calloc(1, end - ini);
	if (ptr == NULL)
		return(NULL);
	i = 0;
	while (ini + i < end)
	{
		ptr[i] = s1[ini + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
} */
