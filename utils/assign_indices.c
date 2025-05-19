/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_indices.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:05:41 by keteo             #+#    #+#             */
/*   Updated: 2025/05/16 00:05:41 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    assign_indices(t_stack *a)
{
    int size;
    int *arr;
    t_stack *temp;

    size = stack_size(a);
    arr = stack_to_array(a, size);
    sort_array(arr, size);
    temp = a;
    while (temp)
    {
        temp->index = find_index(arr, temp->value, size);
        temp = temp->next;
    }
    free(arr);
}