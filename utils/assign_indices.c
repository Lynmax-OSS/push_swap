/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_indices.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:59:54 by keteo             #+#    #+#             */
/*   Updated: 2025/05/05 16:59:54 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	assign_indices(t_stack *stack)
{
	t_node	*current;
	t_node	*next;
	int		i;

	current = stack->top;
	i = 0;
	while (current)
	{
		next = current->next;
		current->index = i++;
		current = next;
	}
}