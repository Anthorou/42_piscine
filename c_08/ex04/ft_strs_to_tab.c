/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:29:40 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/30 15:38:37 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*rep;
	char	*check;

	i = 0;
	while (src[i] != '\0')
		i++;
	check = ((rep = (char *)malloc(1 * (i + 1))));
	if (!check)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		rep[i] = src[i];
		i++;
	}
	rep[i] = '\0';
	return (rep);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].copy = 0;
	tab[i].str = 0;
	return (tab);
}
