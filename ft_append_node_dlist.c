/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_node_dlist.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:58:35 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/12/10 14:58:55 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	append_node(t_dlist **head_node, int number)
{
	t_dlist	*new_node;
	t_dlist	*last;

	last = *head_node;
	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	new_node->number = number;
	new_node->next = NULL;
	if (*head_node == NULL)
	{
		new_node->prev = NULL;
		*head_node = new_node;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
}