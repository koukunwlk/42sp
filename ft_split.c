/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:04:33 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/08/26 19:17:07 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_counter(char const *s, char c)
{
	 size_t	i;
	 size_t	j;
	 char	last;

	last = c;
	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (last == c && s[i] != c)
			j++;
		last = s[i];
		i++;
	}
	return (j);
}

static void	ft_alloc_matrix(char const *s, char c, size_t size, char **arr)
{
	size_t	count;
	char	*tmp;
	size_t	len;

	count = 0;
	tmp = (char *)s;
	while (count < size)
	{
		len = 0;
		while (*tmp == c && *tmp != 0)
			++tmp;
		while (tmp[len] != c && tmp[len] != 0)
			len++;
		arr[count] = ft_substr(tmp, 0, len);
		tmp += len;
		count++;
	}
	arr[count] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;

	arr = 0;
	if (!s)
		return (0);
	i = ft_word_counter(s, c);
	arr = (char **)malloc(sizeof(char *) * (i + 1));
	if (!arr)
		return (0);
	ft_alloc_matrix(s, c, i, arr);
	return (arr);
}
