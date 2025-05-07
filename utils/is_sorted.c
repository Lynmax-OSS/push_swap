/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:56:01 by keteo             #+#    #+#             */
/*   Updated: 2025/05/05 16:56:01 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int is_sorted(t_stack *stack)
{
	t_node	*current;
	t_node	*next;
	
	while (current && current->next)
	{
		if (current->value > next->value)
			return (0);
		current = current->next;
	}
	return (1);
}