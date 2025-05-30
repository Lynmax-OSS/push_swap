/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 23:51:30 by keteo             #+#    #+#             */
/*   Updated: 2025/05/30 23:51:30 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->index;
	y = (*a)->next->index;
	z = (*a)->next->next->index;

	if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x < y && y > z && x < z)
	{
		sa(a);
		ra(a);
	}
	else if (x < y && y > z && x > z)
		rra(a);
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	min_pos;

	min_pos = get_position(*a, 0);
	rotate_to_top(a, min_pos, 'a');
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min_pos;
	
	min_pos = get_position(*a, 0);
	rotate_to_top(a, min_pos, 'a');
	pb(a, b);
	min_pos = get_position(*a, 1);
	rotate_to_top(a, min_pos, 'a');
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}

void	sort_small(t_stack **a, t_stack **b, int size)
{
	if (size == 2 && (*a)->index > (*a)->next->index)
		sa(a);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
}