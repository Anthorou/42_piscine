/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:24:16 by aroussea          #+#    #+#             */
/*   Updated: 2023/02/02 13:09:06 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int n, int *tab, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	print_comb(int n, int *tab)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i < n)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int	rep[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		rep[i] = i;
		i++;
	}
	print(n, rep, 0);
	while (rep[0] != 10 - n || rep[n - 1] != 9)
	{
		if (rep[n - 1] != 9)
			rep[n - 1] += 1;
		else
		{
			print_comb(n, rep);
		}
		print(n, rep, 1);
	}
}

// int	main(void)
// {
// 	ft_print_combn(5);
// }
