/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:46:14 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/08/25 15:07:52 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	last;
	int	i;
	int	len;

	i = 0;
	last = -1;
	len = ft_strlen((char *)s);
	while (i <= len)
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (last == -1)
		return (0);
	return ((char *)s + last);
}
