/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:07:27 by aroussea          #+#    #+#             */
/*   Updated: 2023/02/01 12:18:06 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

//#include <stdio.h>
// int main(void)
// {
// 	int a;
// 	int b;

// 	a = 2;
// 	b = 3;
// 	printf("a est %d | ", a);
// 	printf("b est %d\n", b);

// 	ft_swap(&a , &b);

// 	printf("a est %d | ", a);
// 	printf("b est %d ", b);

// }
