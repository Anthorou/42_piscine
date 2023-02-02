/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 09:30:43 by aroussea          #+#    #+#             */
/*   Updated: 2023/02/01 12:18:27 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//#include <stdio.h>
// int main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 10;
// 	b = 3;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("La division de %d et de %d = %d\n", a , b , div);
// 	printf("Le modulo de %d et de %d = %d\n", a , b , mod);
// 	printf("%d / %d = %d", a, b, div);
// }
