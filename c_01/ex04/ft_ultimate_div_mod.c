/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:51:54 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/13 10:55:23 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

// int main(void)
// {
// 	int x;
// 	int y;

// 	x = 10;
// 	y = 3;

// 	printf("x = %d | y = %d\n", x, y);

// 	ft_ultimate_div_mod(&x, &y);

// 	printf("x = %d | y = %d\n", x, y);
// }