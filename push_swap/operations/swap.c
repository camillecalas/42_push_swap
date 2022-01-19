/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:27:57 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 10:27:59 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
void	ft_swap_a(t_Stack pile)
{
	int	temp;

	temp = pile->value;
	pile->value = pile->next->value;
	pile->next->value = temp;
	temp = pile->index;
	pile->index = pile->next->index;
	pile->next->index = temp;
	ft_putstr_fd("sa\n", 1);
}
*/
void	ft_swap_a(t_Stack **pile)
{
	t_Stack	*temp;

	if (pile && (*pile)->next != NULL)
	{
		temp = (*pile)->next;
		(*pile)->next = temp->next;
		temp->next = *pile;
		*pile = temp;
		ft_putstr_fd("sa\n", 1);
	}
}

void	ft_swap_b(t_Stack **pile)
{
	t_Stack	*temp;

	if (pile && (*pile)->next != NULL)
	{
		temp = (*pile)->next;
		(*pile)->next = temp->next;
		temp->next = *pile;
		*pile = temp;
		ft_putstr_fd("sb\n", 1);
	}
}
