/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccalas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:05:57 by ccalas            #+#    #+#             */
/*   Updated: 2021/11/29 19:08:55 by ccalas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_wordlen(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !(str[i] == c))
		i++;
	return (i);
}

static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	count;

	if (!str[0])
		return (0);
	i = 1;
	count = !(str[0] == c);
	while (str[i] != '\0')
	{
		if (str[i - 1] == c && !(str[i] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*ft_strndup(char *src, int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_write(char **table, char *s1, char c)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (s1[i])
	{
		if (!(s1[i] == c))
		{
			table[k] = ft_strndup(&s1[i], ft_wordlen(&s1[i], c));
			if (table[k] == NULL)
				return (NULL);
			i = i + ft_wordlen(&s1[i], c);
			k++;
		}
		else
			i++;
	}
	table[k] = NULL;
	return (table);
}

char	**ft_split(char const *s, char c)
{
	char	**table;
	char	*s1;
	char	**dest;

	s1 = (char *)s;
	if (!s1)
		return (NULL);
	table = malloc(sizeof(char *) * (ft_wordcount(s1, c) + 1));
	if (!table)
		return (NULL);
	dest = ft_write(table, s1, c);
	return (dest);
}
