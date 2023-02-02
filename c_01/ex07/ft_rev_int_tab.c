/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:02:22 by aroussea          #+#    #+#             */
/*   Updated: 2023/02/01 12:40:28 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	inv;

	i = 0;
	while (i < (size / 2))
	{
		inv = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = inv;
		i++;
	}
}

// int main(void)
// {
// 	int tab[9];

// 	tab[0] = 1;
// 	tab[1] = 2;
// 	tab[2] = 3;
// 	tab[3] = 4;
// 	tab[4] = 5;
// 	tab[5] = 6;
// 	tab[6] = 7;
// 	tab[7] = 8;
// 	tab[8] = 9;

// 	ft_rev_int_tab(tab, 9);

// 	char ecrit;

// 	for(int i = 0; i < 9; i++)
// 	{
// 		ecrit = tab[i] + 48;
// 		write(1, &ecrit, 1);
// 		write(1, ", ", 2);
// 	}
// }
