/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:37:33 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/14 18:39:11 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (s == 0)
		return (NULL);
	i = 0;
	if ((size_t)ft_strlen(s) < start)
		return (ft_strdup(""));
	ptr = (char *)ft_calloc(len + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (i < len && s[start + i] != '\0')
		{
			ptr[i] = s[start + i];
			i++;
		}
	}
	return (ptr);
}
