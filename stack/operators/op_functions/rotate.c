/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:41:47 by keteo             #+#    #+#             */
/*   Updated: 2025/05/07 13:41:47 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

void	rotate(t_stack **stack)
{
    t_node	*first;
    t_node	*last;

    if (!stack || !*stack || (*stack)->next == NULL)
        return ;
    first = (*stack)->top;
    last = (*stack)->top;
    while (last->next)
        last = last->next;
    (*stack)->top = first->next;
    first->next = NULL;
    last->next = first;
}