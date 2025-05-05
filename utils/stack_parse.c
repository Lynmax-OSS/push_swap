/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:41:40 by keteo             #+#    #+#             */
/*   Updated: 2025/05/05 14:41:40 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_number(char *str)
{
    int i;

    i = 0;
    if ((str[0] == '-' || str[0] == '+') && str[1])
        i++;
    while (str[i])
    {
        if (!ft_isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

void parse_stack(t_stack *a, char **argv)
{
    int     i;
    long    val;
    t_node  *tmp;

    
}