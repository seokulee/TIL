/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_tail_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokklee <seokklee@student.42seoul.kr M    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:25:45 by seokklee          #+#    #+#             */
/*   Updated: 2023/05/25 15:08:55 by seokklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	list_add_tail(t_list *lst, t_node *node)
{
	if (!lst || !node)
		return ;
	if (lst->tail == NULL)
	{
		lst->head = node;
		lst->tail = node;
	}
	else
	{
		lst->tail->next = node;
		node->prev = lst->tail;
		node->next = lst->head;
		lst->head->prev = node;
		lst->tail = node;
	}
	lst->count += 1;
}
