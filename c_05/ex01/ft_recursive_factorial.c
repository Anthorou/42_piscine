/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:15:34 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/24 16:56:54 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	rep;

	rep = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (rep);
}

// int main(void)
// {
// 	int i = 0;
// 	int rep = ft_recursive_factorial(i);
// 	printf("%d", rep);
// }
