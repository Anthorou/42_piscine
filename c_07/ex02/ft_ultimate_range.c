/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:43:42 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/28 13:56:44 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*chaine;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	chaine = (int *)malloc(sizeof(int) * (max - min));
	if (!chaine)
	{
		*range = 0;
		return (-1);
	}
	*range = chaine;
	i = 0;
	while (i != (max - min))
	{
		chaine[i] = min + i;
		i++;
	}
	return (max - min);
}

// int main(void)
// {
// 	int min = 16;
// 	int max = 17;
// 	int *range;
// 	int rep = ft_ultimate_range(&range, min, max);
// 	printf("%d\n", rep);
// 	int i = 0;
// 	while (i < rep)
// 	{
// 		printf("%d ", range[i]);
// 		i++;
// 	}
// }