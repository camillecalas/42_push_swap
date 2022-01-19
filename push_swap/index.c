/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:24:53 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 10:24:55 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_Stack *pile)
{
	int		len;
	t_Stack	*temp;

	len = lengh_st(pile) - 1;
	temp = pile;
	while (temp)
	{
		temp->index = len - browse_index(pile, temp->value);
		temp = temp->next;
	}
}

int	browse_index(t_Stack *pile, int i)
{
	int		count;
	t_Stack	*temp;

	count = 0;
	temp = pile;
	while (temp)
	{
		if (temp->value > i)
			count ++;
		temp = temp->next;
	}
	return (count);
}
