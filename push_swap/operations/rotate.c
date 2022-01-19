/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:27:26 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 10:27:29 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_a(t_Stack **pile)
{
	t_Stack	*temp;

	if (*pile)
	{
		temp = *pile;
		*pile = (*pile)->next;
		ft_lstadd_back(pile, temp);
		temp->next = NULL;
		ft_putstr_fd("ra\n", 1);
	}
}

void	ft_rotate_b(t_Stack **pile)
{
	t_Stack	*temp;

	if (*pile)
	{
		temp = *pile;
		*pile = (*pile)->next;
		ft_lstadd_back(pile, temp);
		temp->next = NULL;
		ft_putstr_fd("rb\n", 1);
	}
}

void	ft_rotate_rr(t_Stack **pile_a, t_Stack **pile_b)
{
	t_Stack	*temp_a;
	t_Stack	*temp_b;

	if (*pile_a && *pile_b)
	{
		temp_a = *pile_a;
		*pile_a = (*pile_a)->next;
		ft_lstadd_back(pile_a, temp_a);
		temp_a->next = NULL;
		temp_b = *pile_b;
		*pile_b = (*pile_b)->next;
		ft_lstadd_back(pile_b, temp_b);
		temp_b->next = NULL;
		ft_putstr_fd("rr\n", 1);
	}
}

void	ft_rotate_rra(t_Stack **pile_a)
{
	t_Stack	*temp;

	if (*pile_a)
	{
		temp = ft_second_last(*pile_a);
		ft_lstlast(*pile_a)->next = *pile_a;
		*pile_a = temp->next;
		temp->next = NULL;
		ft_putstr_fd("rra\n", 1);
	}
}
