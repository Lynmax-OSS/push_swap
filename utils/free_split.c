/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freesplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:19:07 by keteo             #+#    #+#             */
/*   Updated: 2025/05/17 13:19:07 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free (split[i++]);
	free (split);
}
