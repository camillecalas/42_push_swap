/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:29:01 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/19 11:29:09 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_stack(t_Stack **pile_a, t_Stack **pile_b)
{
	int	x;

	x = lengh_st(*pile_a);
	if (x == 2)
		ft_swap_a(pile_a);
	else if (x == 3)
		ft_sort_stack_three(pile_a, 0);
	else if (x == 4)
		ft_sort_stack_four(pile_a, pile_b);
	else if (x == 5)
		ft_sort_stack_five(pile_a, pile_b);
	else if (x > 5)
		radix_sort(pile_a, pile_b);
}

int	get_len_bits(t_Stack **pile)
{
	t_Stack	*temp;
	int		max;
	int		len_bits;

	temp = *pile;
	max = temp->index;
	len_bits = 0;
	while (temp)
	{
		if (temp->index > max)
			max = temp->index;
		temp = temp->next;
	}
	while ((max >> len_bits) != 0)
		len_bits++;
	return (len_bits);
}

void	radix_sort(t_Stack **pile_a, t_Stack **pile_b)
{
	t_Stack	*temp_a;
	int		i;
	int		j;
	int		size;
	int		len_bits;

	i = 0;
	temp_a = *pile_a;
	size = lengh_st(temp_a);
	len_bits = get_len_bits(pile_a);
	while (i < len_bits)
	{
		j = 0;
		while (j++ < size)
		{
			temp_a = *pile_a;
			if (((temp_a->index >> i) & 1) == 1)
				ft_rotate_a(pile_a);
			else
				ft_push_b(pile_a, pile_b);
		}
		while (lengh_st(*pile_b) != 0)
			ft_push_a(pile_a, pile_b);
		i++;
	}
}
