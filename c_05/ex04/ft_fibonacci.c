/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:02:36 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/25 12:33:16 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	index_0;
	int	index_1;

	index_0 = 0;
	index_1 = 1;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (index_0);
	else if (index == 1)
		return (index_1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(void)
{
	int i = ft_fibonacci(8);

	printf("%d", i);
}
