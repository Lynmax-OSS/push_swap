/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:16:02 by keteo             #+#    #+#             */
/*   Updated: 2025/05/05 16:16:02 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_stack	*free_stack(t_stack *stack)
{
	t_node *tmp;
	t_node *next;
	
	tmp = stack->top;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	return (0);
}

t_stack *stack_init(void)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		error("Malloc failed\n");
	stack->top = 0;
	stack->size = 0;
	return (stack);
}

int stack_size(t_stack *stack)
{
	return (stack->size);
}