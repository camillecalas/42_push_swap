/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:25:30 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 10:25:32 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char			**av;
	int				i;
	int				x;
	t_Stack			*pile_a;
	t_Stack			*pile_b;

	if (ft_print_checklist(argc, argv) == 0)
		return (0);
	av = value_av(argc, argv);
	i = value_i(argc, argv);
	if (ft_is_sorted(i, av) == true || av[i + 1] == NULL)
		return (0);
	pile_a = new_stack();
	while (av[i])
	{	
		x = ft_atoi(av[i]);
		ft_lstadd_back(&pile_a, ft_lstnew(x));
		i++;
	}
	ft_index(pile_a);
	pile_b = new_stack();
	ft_sort_stack(&pile_a, &pile_b);
	pile_b = clear_stack(pile_b);
	pile_a = clear_stack(pile_a);
	return (0);
}
