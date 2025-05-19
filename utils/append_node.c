/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:01:18 by keteo             #+#    #+#             */
/*   Updated: 2025/05/16 00:01:18 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	append_node(t_stack **a, t_stack *node)
{
	t_stack	*temp;

	if (!*a)
		*a = node;
	else
	{
		temp = *a;
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
}
