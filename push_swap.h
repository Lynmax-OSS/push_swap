/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 18:53:20 by keteo             #+#    #+#             */
/*   Updated: 2025/05/04 18:53:20 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"

typedef struct s_node
{
	int             value;
	int             index;
	struct s_node   *next;
}t_node;

typedef struct s_stack
{
	t_node  *top;
	int     size;
}t_stack;

void    error(char *str);
t_stack *stack_init(void);
t_stack	*free_stack(t_stack *stack);
int		stack_size(t_stack *stack);
void	assign_indices(t_stack *stack);
void	error(char *str);
int		is_sorted(t_stack *stack);
void	parse_stack(t_stack *a, char **argv);
void	parse_args(t_stack *a, int argc, char **argv);

#endif