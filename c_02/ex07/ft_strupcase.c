/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:24:18 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/15 17:24:06 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = "-Bien l5e bonjour.79845 j'espere5 que vous all5ez bien.";

// 	ft_strupcase(str);

// 	int i = 0;
// 	char a;
// 	while(str[i] != '\0')
// 	{
// 		a = str[i];
// 		write(1, &a, 1);
// 		i++;
// 	}
// }
