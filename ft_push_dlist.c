/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_dlist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:58:09 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/12/10 14:59:02 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	push(t_dlist **head_node, int number)
{
	t_dlist	*new_node;

	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	new_node->number = number;
	new_node->next = (*head_node);
	new_node->prev = NULL;
	if ((*head_node) != NULL)
		(*head_node)->prev = new_node;
	(*head_node) = new_node;
}
