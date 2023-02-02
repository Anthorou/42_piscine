/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:32:20 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/13 16:58:51 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			res++;
			i++;
		}
		else
			i++;
	}
	if (res != 1)
		return (0);
	else
		return (res);
}

// int main(void)
// {
// 	char v[] = "878952a";
// 	char v2[] = "8926390273";

// 	int resultat1 = ft_str_is_numeric(v);
// 	int resultat2 = ft_str_is_numeric(v2);

// 	printf("%d\n", resultat1);
// 	printf("%d\n", resultat2);
// }