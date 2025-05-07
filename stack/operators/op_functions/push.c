/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:33:43 by keteo             #+#    #+#             */
/*   Updated: 2025/05/05 17:33:43 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

void    push(t_stack **src, t_stack **dest)
{
    t_stack	*temp;

    if (!src || !dest || !*src)
        return ;
    temp = *src;
    *src = (*src)->next;
    temp->next = *dest;
    *dest = temp;
}
