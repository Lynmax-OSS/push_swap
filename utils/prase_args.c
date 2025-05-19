/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prase_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:14:54 by keteo             #+#    #+#             */
/*   Updated: 2025/05/17 13:14:54 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_number(char *str)
{
	if (!*str || ((*str == '-' || *str == '+') && !str[1]))
		return (0);
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

void	handle_split(char *arg, t_stack **a)
{
	char	**nums;
	int		i;

	i = 0;
	nums = ft_split(arg, ' ');
	while (nums[i])
	{
		if (!is_number(nums[i]))
		{
			free_split(nums);
			free_stack(a);
			exit(1);
		}
		append_node(a, new_node(ft_atoi(nums[i++])));
	}
	free_split(nums);
}

void	parse_args(int argc, char **argv, t_stack **a)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_strchr(argv[i], ' '))
			handle_split(argv[i], a);
		else
		{
			if (!is_number(argv[i]))
			{
				free_stack(a);
				exit(1);
			}
			append_node(a, new_node(ft_atoi(argv[i])));
		}
		i++;
	}
}
