/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_position.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 00:10:28 by keteo             #+#    #+#             */
/*   Updated: 2025/05/31 00:10:28 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_position(t_stack *stack, int index)
{
	int		pos;
	t_stack	*temp;

	pos = 0;
	temp = stack;
	while (temp)
	{
		if (temp->index == index)
			break ;
		pos++;
		temp = temp->next;
	}
	return (pos);
}
