/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_to_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 00:17:53 by keteo             #+#    #+#             */
/*   Updated: 2025/05/31 00:17:53 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	rotate_to_top(t_stack **stack, int pos, char name)
// {
// 	int	size;

// 	size = stack_size(*stack);
// 	if (pos <= size / 2)
// 	{
// 		while (pos-- > 0)
// 		{
// 			if (name == 'a')
// 				ra(stack);
// 			else
// 				rb(stack);
// 		}
// 	}
// 	else
// 	{
// 		pos = size - pos;
// 		while (pos-- > 0)
// 		{
// 			if (name == 'a')
// 				rra(stack);
// 			else
// 				rrb(stack);
// 		}
// 	}
// }

void	rotate_to_top(t_stack **a, int pos)
{
	int	size ;
	size = stack_size(*a);
	if (pos <= size / 2)
		while (pos-- > 0)
			ra(a);
	else
	{
		pos = size - pos;
		while (pos-- > 0)
			rra(a);
	}
}
