/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:26:01 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 10:26:02 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**value_av(int argc, char **argv)
{
	char	**av;

	av = NULL;
	if (argc == 2)
		av = ft_split(argv[1], ' ');
	else if (argc > 2)
		av = argv;
	return (av);
}

int	value_i(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2)
	{
		ft_split(argv[1], ' ');
		i = 0;
	}
	else if (argc > 2)
		i = 1;
	return (i);
}
