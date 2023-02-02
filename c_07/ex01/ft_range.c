/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:21:45 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/26 15:11:19 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	y;
	int	*rep;

	i = 0;
	if (min >= max)
		return (NULL);
	i = max - min;
	rep = malloc(4 * i);
	i = min;
	y = 0;
	while (i < max)
	{
		rep[y] = i;
		i++;
		y++;
	}
	return (rep);
}

// int main(void)
// {
// 	int min = 2;
// 	int max = 25;
// 	int *rep = ft_range(min, max);
// 	int i = 0;
// 	while (i < (max - min))
// 	{
// 		printf("%d ", *rep);
// 		rep++;
// 		i++;
// 	}
// }