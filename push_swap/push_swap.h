/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 10:25:47 by ccalas            #+#    #+#             */
/*   Updated: 2022/01/17 10:25:48 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* LIBRAIRIES */
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/* TYPE BOOLEEN */
typedef enum Bool
{
	false,
	true
}	t_Bool;

typedef struct s_Stack
{
	int				value;
	int				index;
	struct s_Stack	*next;
}	t_Stack;

/* PROTOTYPES DES FONCTIONS */
/* UTILS */
int				ft_isdigit(int c);
long int		ft_atoi(const char *str);
char			**ft_split(char const *s, char c);
void			ft_putstr_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
/* PUSH_SWAP */
void			ft_lstadd_back(t_Stack **alst, t_Stack *new);
t_Bool			is_empty_stack(t_Stack *st);
t_Stack			*push_stack(t_Stack *st, int value);
t_Stack			*new_stack(void);
t_Stack			*pop_stack(t_Stack *st);
t_Stack			*clear_stack(t_Stack *sta);
void			print_stack(t_Stack *sta);
int				lengh_st(t_Stack *st);
t_Stack			*ft_lstnew(int value);
t_Stack			*ft_lstlast(t_Stack *st);
void			ft_lstadd_front(t_Stack **alst, t_Stack *new);
/* VALUE_MAIN */
char			**value_av(int argc, char **argv);
int				value_i(int argc, char **argv);
/* CHECK_LIST */
int				ft_check_isdigit(char **argv, int i);
int				ft_checklist(char **argv, int i);
int				ft_check_doubles(char **argv, int i);
int				ft_print_checklist(int argc, char **argv);
int				ft_is_space(char *argv);
/* INDEX */
void			ft_index(t_Stack *pile);
int				browse_index(t_Stack *pile, int i);
/* SORT */
int				ft_is_sorted(int i, char **av);
void			ft_sort_stack_three(t_Stack **pile, int x);
void			ft_sort_stack_five(t_Stack **pile, t_Stack **pile_b);
void			ft_sort_stack_four(t_Stack **pile_a, t_Stack **pile_b);
void			ft_sort_stack_five_follow(t_Stack **pile_a, t_Stack **pile_b);
/* SORT_MAIN */
void			ft_sort_stack(t_Stack **pile_a, t_Stack **pile_b);
int				get_len_bits(t_Stack **pile);
void			radix_sort(t_Stack **pile_a, t_Stack **pile_b);
/* OPERATIONS */
/* ROTATE*/
void			ft_rotate_a(t_Stack **pile);
void			ft_rotate_b(t_Stack **pile);
void			ft_rotate_rr(t_Stack **pile_a, t_Stack **pile_b);
void			ft_rotate_rra(t_Stack **pile_a);
void			ft_rotate_rrb(t_Stack **pile_b);
void			ft_rotate_rrr(t_Stack **pile_a, t_Stack **pile_b);
t_Stack			*ft_second_last(t_Stack *pile);
/* SWAP*/
void			ft_swap_a(t_Stack **pile);
void			ft_swap_b(t_Stack **pile);
/* PUSH*/
void			ft_push_a(t_Stack **pile_a, t_Stack **pile_b);
void			ft_push_b(t_Stack **pile_a, t_Stack **pile_b);

#endif
