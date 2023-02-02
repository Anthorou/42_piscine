/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:11:47 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/24 16:11:57 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_temp;

	nb_temp = nb;
	if (power < 0)
		return (0);
	else if (power == 0 || nb == 0)
		return (1);
	while (power > 1)
	{
		nb *= nb_temp;
		power--;
	}
	return (nb);
}

// int main(void)
// {
// 	int nb = 5;
// 	int power = 2;

// 	int rep = ft_iterative_power(nb, power);
// 	printf("%d", rep);
// }