/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_clear_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokklee <seokklee@student.42seoul.kr M    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:25:48 by seokklee          #+#    #+#             */
/*   Updated: 2023/05/25 15:09:00 by seokklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	list_clear(t_list *lst)
{
	t_node	*cursor;
	t_node	*tmp;

	cursor = lst->head;
	while (lst->count > 0)
	{
		tmp = cursor->next;
		node_clear(cursor);
		cursor = tmp;
		lst->count -= 1;
	}
	free(lst);
	lst = NULL;
}
