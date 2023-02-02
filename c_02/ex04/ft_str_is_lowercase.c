/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:54:32 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/13 17:00:30 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
// 	char v[] = "sajhggdkTa";
// 	char v2[] = "shuaos";

// 	int resultat1 = ft_str_is_lowercase(v);
// 	int resultat2 = ft_str_is_lowercase(v2);

// 	printf("%d\n", resultat1);
// 	printf("%d\n", resultat2);
// }
