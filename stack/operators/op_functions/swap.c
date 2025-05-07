/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:36:49 by keteo             #+#    #+#             */
/*   Updated: 2025/05/07 13:36:49 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

void	swap(t_stack **stack)
{
    t_node	*first;
    t_node	*second;

    if (!stack || !*stack || (*stack)->next == NULL)
        return ;
    first = (*stack)->top;
    second = first->next;
    first->next = second->next;
    second->next = first;
    (*stack)->top = second;
}