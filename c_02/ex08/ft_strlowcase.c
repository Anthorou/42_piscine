/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:06:06 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/18 09:57:08 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 91 && str[i] > 64)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char v[] = "Bien LE bonJour. HSABIBDSU";

// 	ft_strlowcase(v);

// 	int i = 0;
// 	char b;

// 	while(v[i] != '\0')
// 	{
// 		b = v[i];
// 		write(1, &b, 1);
// 		i++;
// 	}
// }