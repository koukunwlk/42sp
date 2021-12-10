/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_after_dlist.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:58:21 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/12/10 14:58:58 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	insert_after(t_dlist *prev_node, int number)
{
	t_dlist	*new_node;

	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	if (prev_node == NULL)
	{
		free(new_node);
		return ;
	}
	new_node->number = number;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	new_node->prev = prev_node;
	if (new_node->next != NULL)
		new_node->prev->next = new_node;
}
