/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:01:27 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/13 17:06:28 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
// 	char v[] = "TFAD";
// 	char v2[] = "TFSAdsa";

// 	int resultat1 = ft_str_is_uppercase(v);
// 	int resultat2 = ft_str_is_uppercase(v2);

// 	printf("%d\n", resultat1);
// 	printf("%d\n", resultat2);
// }