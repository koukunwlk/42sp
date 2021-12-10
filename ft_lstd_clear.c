/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstd_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:42:42 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/12/10 18:47:38 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstd_clear(t_dlist **head, void (*del)(void *))
{
	t_dlist	*tmp;

	if (!head || !del)
		return ;
	while (*head)
	{
		tmp = (*head)->next;
		free((void *)(*head));
		(*head) = tmp;
	}
}
