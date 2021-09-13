/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:37:33 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/13 13:54:29 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (s == 0)
		return (NULL);
	ptr = ft_calloc(sizeof(char), len + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (i < len && s[start + i] != '\0')
		{
			ptr[i] = s[start + i];
			i++;
		}
	}
	return (ptr);
}
