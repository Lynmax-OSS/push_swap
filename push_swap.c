/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:07:04 by keteo             #+#    #+#             */
/*   Updated: 2025/05/16 00:07:04 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	parse_args(argc, argv, &a);
	assign_indices(a);
	if (!is_sorted(a))
	{
		if (stack_size(a) <= 5)
			sort_small(&a, &b, stack_size(a));
		else
			radix_sort(&a, &b);
	}
	free_stack(&a);
	return (0);
}
