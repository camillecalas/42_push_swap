/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:26:50 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 10:26:51 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_a(t_Stack **pile_a, t_Stack **pile_b)
{
	t_Stack	*temp;

	if (*pile_b)
	{
		temp = (*pile_b)->next;
		(*pile_b)->next = *pile_a;
		*pile_a = *pile_b;
		*pile_b = temp;
		ft_putstr_fd("pa\n", 1);
	}
}

void	ft_push_b(t_Stack **pile_a, t_Stack **pile_b)
{
	t_Stack	*temp;

	if (*pile_a)
	{
		temp = (*pile_a)->next;
		(*pile_a)->next = *pile_b;
		*pile_b = *pile_a;
		*pile_a = temp;
		ft_putstr_fd("pb\n", 1);
	}
}
