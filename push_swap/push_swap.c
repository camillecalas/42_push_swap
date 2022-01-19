/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:26:26 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 10:26:27 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Stack	*new_stack(void)
{
	return (NULL);
}

t_Bool	is_empty_stack(t_Stack *st)
{
	if (st == NULL)
		return (true);
	return (false);
}

int	lengh_st(t_Stack *st)
{
	int	len;

	len = 0;
	while (!is_empty_stack(st))
	{
		len++;
		st = st->next;
	}
	return (len);
}

void	ft_lstadd_back(t_Stack **alst, t_Stack *new)
{
	t_Stack	*last;

	if (*alst)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
	else
		*alst = new;
}

void	ft_lstadd_front(t_Stack **alst, t_Stack *new)
{
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	new->next = *alst;
	*alst = new;
}
