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

int is_duplicate(t_node *top, int value)
{
    t_node *tmp;

    tmp = top;
    while (tmp)
    {
        if (tmp->value == value)
            return (1);
        tmp = tmp->next;
    }
    return (0);
}

void parse_stack(t_stack *a, char **argv)
{
    int     i;
    long    val;
    t_node  *tmp;
    t_node  *new;

    i = 1;
    while (argv[i])
    {
        if (!is_number(argv[i]))
            error("Not a number\n");
        val = ft_atoi(argv[i]);
        if (val < INT_MIN || val > INT_MAX)
            error("Over/under the int limit\n");
        new = malloc(sizeof(t_node))
        if (!new)
            error("Malloc failed\n");
        new->value = (int)val;
        new->index = -i;
        new->next = NULL;
        tmp = a->top;
        if (is_duplicate(tmp, new->value))
        {
            free(new);
            error("Duplicate numbers\n");
        }
        new->next = a->top;
        a->top = new;
        a->size++;
        i++;
    }
}