/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:25:13 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 10:25:15 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_isdigit(char **argv, int i)
{
	int	j;

	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

int	ft_is_space(char *argv)
{
	int	len;
	int	j;

	len = 0;
	j = 0;
	while (argv[len] == 32)
		len++;
	while (argv[j])
		j++;
	if (len == j)
		return (true);
	return (false);
}

int	ft_check_doubles(char **argv, int i)
{
	int	j;

	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

int	ft_checklist(char **argv, int i)
{
	if (ft_check_isdigit(argv, i) == false)
		return (false);
	else if (ft_check_doubles(argv, i) == true)
		return (false);
	while (argv[i])
	{
		if (ft_atoi(argv[i]) < INT_MIN || ft_atoi(argv[i]) > INT_MAX)
			return (false);
		i++;
	}
	i = 1;
	return (true);
}

int	ft_print_checklist(int argc, char **argv)
{
	int	i;

	i = value_i(argc, argv);
	if (argc < 2)
		return (0);
	else if (argc == 2)
	{
		if (ft_is_space(argv[1]) == true
			|| ft_checklist(ft_split(argv[1], ' '), i) == false)
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
	}
	else if (argc > 2)
	{
		if (ft_checklist(argv, i) == false)
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
	}
	return (true);
}
