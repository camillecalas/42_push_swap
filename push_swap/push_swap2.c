/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:31:18 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/19 11:31:19 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Stack	*pop_stack(t_Stack *st)
{
	t_Stack	*element;

	if (is_empty_stack(st))
		return (new_stack());
	element = st -> next;
	free (st);
	return (element);
}

t_Stack	*clear_stack(t_Stack *sta)
{
	while (!is_empty_stack(sta))
		sta = pop_stack(sta);
	return (new_stack());
}

t_Stack	*ft_lstnew(int value)
{
	t_Stack	*new;

	new = malloc(sizeof(t_Stack));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = 0;
	new->next = NULL;
	return (new);
}

t_Stack	*ft_lstlast(t_Stack *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
