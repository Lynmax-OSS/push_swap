/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 14:02:56 by keteo             #+#    #+#             */
/*   Updated: 2025/05/14 14:02:56 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

// Stack operations
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

// Utils
int		get_max_bits(int max);
void	assign_indices(t_stack *a);
int		*stack_to_array(t_stack *a, int size);
void	sort_array(int *array, int size);
int		find_index(int *arr, int val, int size);
int		stack_size(t_stack *a);
void	free_stack(t_stack **a);
t_stack	*new_node(int value);
void	append_node(t_stack **a, t_stack *node);
int		is_sorted(t_stack *a);
void	free_split(char **split);
void	parse_args(int argc, char **argv, t_stack **a);
int		is_number(char *str);
void	handle_split(char *arg, t_stack **a);
void	rotate_to_top(t_stack **stack, int pos);
int		get_position(t_stack *stack, int index);

// Sort
void	radix_sort(t_stack **a, t_stack **b);
void	sort_small(t_stack **a, t_stack **b, int size);

#endif