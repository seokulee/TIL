/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokklee <seokklee@student.42seoul.kr M    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:26:32 by seokklee          #+#    #+#             */
/*   Updated: 2023/05/26 21:57:23 by seokklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list *lst)
{
	int	tmp;

	tmp = lst->head->value;
	lst->head->value = lst->head->next->value;
	lst->head->next->value = tmp;
}

void	do_sa(t_list *a)
{
	if (a->count < 2)
		return ;
	swap(a);
	write(1, "sa\n", 3);
}

void	do_sb(t_list *b)
{
	if (b->count < 2)
		return ;
	swap(b);
	write(1, "sb\n", 3);
}

void	do_ss(t_list *a, t_list *b)
{
	if (a->count < 2 && b->count < 2)
		return ;
	else if (a->count < 2)
		swap(b);
	else if (b->count < 2)
		swap(a);
	else
	{
		swap(a);
		swap(b);
	}
	write(1, "ss\n", 3);
}
