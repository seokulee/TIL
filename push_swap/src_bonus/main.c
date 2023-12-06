/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokklee <seokklee@student.42seoul.kr M    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:21:16 by seokklee          #+#    #+#             */
/*   Updated: 2023/06/01 10:16:37 by seokklee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (argc < 2)
		exit(1);
	a = list_new();
	b = list_new();
	if (!get_data(argc, argv, a))
	{
		write(2, "Error\n", 6);
		list_clear(a);
		list_clear(b);
		exit(1);
	}
	checker(a, b);
	list_clear(a);
	list_clear(b);
}
