/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:04:12 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/24 15:21:43 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	while (i != 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}

// int main(void)
// {
// 	int i = 3;
// 	int rep = ft_iterative_factorial(i);
// 	printf("%d", rep);
// }
