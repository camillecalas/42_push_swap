/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:34:39 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 15:34:41 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(int i, char **av)
{
	while (av[i] && av[i + 1])
	{
		if (ft_atoi(av[i]) > ft_atoi(av[i + 1]))
			return (false);
		i++;
	}
	return (true);
}

void	ft_sort_stack_three(t_Stack **pile, int x)
{
	if ((*pile)->index > (*pile)->next->next->index
		&& (*pile)->next->index == x)
		ft_rotate_a(pile);
	else if ((*pile)->index < (*pile)->next->next->index
		&& (*pile)->next->index == x)
		ft_swap_a(pile);
	else if ((*pile)->next->next->index == x
		&& (*pile)->index < (*pile)->next->index)
		ft_rotate_rra(pile);
	else if ((*pile)->next->next->index == x
		&& (*pile)->index > (*pile)->next->index)
	{
		ft_swap_a(pile);
		ft_rotate_rra(pile);
	}
	else if ((*pile)->index == x
		&& (*pile)->next->next->index < (*pile)->next->index)
	{
		ft_rotate_rra(pile);
		ft_swap_a(pile);
	}
}

void	ft_sort_stack_four(t_Stack **pile_a, t_Stack **pile_b)
{
	if ((*pile_a)->index != 0)
	{
		while ((*pile_a)->index != 0)
		{
			ft_rotate_a(pile_a);
		}
		ft_push_b(pile_a, pile_b);
		ft_sort_stack_three(pile_a, 1);
		ft_push_a(pile_a, pile_b);
	}
	else
	{
		ft_push_b(pile_a, pile_b);
		ft_sort_stack_three(pile_a, 1);
		ft_push_a(pile_a, pile_b);
	}
}

void	ft_sort_stack_five(t_Stack **pile_a, t_Stack **pile_b)
{
	int	x;

	x = 0;
	while (x < 2)
	{
		if ((*pile_a)->index != x)
		{
			while ((*pile_a)->index != x)
			{
				if ((*pile_a)->next->index == x)
					ft_swap_a(pile_a);
				else
					ft_rotate_a(pile_a);
			}
			ft_push_b(pile_a, pile_b);
			x++;
		}
		else
		{
			ft_push_b(pile_a, pile_b);
			x++;
		}
	}
	ft_sort_stack_five_follow(pile_a, pile_b);
}

void	ft_sort_stack_five_follow(t_Stack **pile_a, t_Stack **pile_b)
{
	ft_sort_stack_three(pile_a, 2);
	ft_push_a(pile_a, pile_b);
	ft_push_a(pile_a, pile_b);
}
