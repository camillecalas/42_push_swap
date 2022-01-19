/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:34:02 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/19 11:34:03 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_rrb(t_Stack **pile_b)
{
	t_Stack	*temp;

	if (*pile_b)
	{
		temp = ft_second_last(*pile_b);
		ft_lstlast(*pile_b)->next = *pile_b;
		*pile_b = temp->next;
		temp->next = NULL;
		ft_putstr_fd("rrb\n", 1);
	}
}

void	ft_rotate_rrr(t_Stack **pile_a, t_Stack **pile_b)
{
	t_Stack	*temp_a;
	t_Stack	*temp_b;

	if (*pile_a && *pile_b)
	{
		temp_a = ft_second_last(*pile_a);
		ft_lstlast(*pile_a)->next = *pile_a;
		*pile_a = temp_a->next;
		temp_a->next = NULL;
		temp_b = ft_second_last(*pile_b);
		ft_lstlast(*pile_b)->next = *pile_b;
		*pile_b = temp_b->next;
		temp_b->next = NULL;
		ft_putstr_fd("rrr\n", 1);
	}
}

t_Stack	*ft_second_last(t_Stack *pile)
{
	t_Stack	*temp;

	temp = pile;
	while (temp->next->next != NULL)
		temp = temp->next;
	return (temp);
}
