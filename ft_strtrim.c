/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:26:40 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/09 16:53:09 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	size_t		size_s;
	char		*ptr;

	if (!s1 || !set)
		return (NULL);
	if(*s1 == 32 || (*s1 >= 9 && *s1 <= 13))
		s1++;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen(s1);
	if(s1[size_s] == 32 || (s1[size_s] >= 9 && s1[size_s] <= 13))
		size_s--;
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s--;
	ptr = ft_substr((char *)s1, 0, size_s + 1);
	return (ptr);
}
