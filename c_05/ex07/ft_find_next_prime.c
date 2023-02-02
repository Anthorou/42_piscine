/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:28:39 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/24 16:58:34 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	result;

	result = 0;
	if (nb <= 1)
		return (2);
	while (result == 0)
	{
		result = ft_is_prime(nb);
		if (result == 1)
			return (nb);
		nb++;
	}
	return (0);
}

// int main(void)
// {
// 	int i = ft_find_next_prime(1025415756);
// 	printf("%d\n", i);
// }
