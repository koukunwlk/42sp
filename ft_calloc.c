/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 21:37:35 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/06 14:22:15 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0 || ptr == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if(ptr == NULL)
		return (0);
	ft_bzero((char *)ptr, size);
	return (ptr);
}
