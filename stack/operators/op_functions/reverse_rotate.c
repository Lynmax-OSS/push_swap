/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 22:15:03 by keteo             #+#    #+#             */
/*   Updated: 2025/05/06 22:15:03 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

void	reverse_rotate(t_stack **stack)
{
    t_stack	*last;
    t_stack	*second_last;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    second_last = *stack;
    while (second_last->next->next)
        second_last = second_last->next;
    last = second_last->next;
    second_last->next = NULL;
    last->next = *stack;
    *stack = last;
}
