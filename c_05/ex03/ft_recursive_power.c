/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:13:34 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/23 16:47:35 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

// int main(void)
// {
// 	int nb = 6;
// 	int power = 6;

// 	int rep = ft_recursive_power(nb, power);
// 	printf("%d", rep);
// }