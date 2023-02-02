/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:08:16 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/19 11:44:28 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	c;
	int	rep;

	rep = 0;
	c = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c *= -1;
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
	{
		rep *= 10;
		rep += str[i] - 48;
		i++;
	}
	return (rep * c);
}

// int main(void)
// {
// 	char v[] = "  ---+--+12304ab567";
// 	int i = ft_atoi(v);
// 	printf("%d\n", i);
// }
