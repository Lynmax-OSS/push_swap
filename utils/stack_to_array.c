/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_to_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:04:08 by keteo             #+#    #+#             */
/*   Updated: 2025/05/16 00:04:08 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*stack_to_array(t_stack *a, int size)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(sizeof(int) * size);
	while (i < size && a)
	{
		arr[i] = a->value;
		i++;
		a = a->next;
	}
	return (arr);
}
