/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:53:24 by keteo             #+#    #+#             */
/*   Updated: 2025/05/04 18:53:24 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;

	a = stack_init();
	b = stack_init();
	parse_args(a, argc, argv);
	assign_indices(a);
	if (is_sorted(a))
	{
		free_stack(a);
		free_stack(b);
		return (1);
	}
	//sort algo here
	
}