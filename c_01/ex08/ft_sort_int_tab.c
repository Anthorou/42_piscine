/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:42:07 by aroussea          #+#    #+#             */
/*   Updated: 2023/02/01 13:13:07 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	tmp;

	x = size;
	while (x != 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		x--;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int v[5] = {18, 5, 3, 989, 2};

// 	ft_sort_int_tab(v, 5);
// 	for(int i = 0; i < 5; i++)
// 	{
// 		printf("%d, ", v[i]);
// 	}
// }