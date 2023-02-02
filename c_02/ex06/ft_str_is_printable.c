/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:14:15 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/14 11:21:38 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
// 	char v2[] = "";

// 	int resultat1 = ft_str_is_printable(v);
// 	int resultat2 = ft_str_is_printable(v2);

// 	printf("%d\n", resultat1);
// 	printf("%d\n", resultat2);
// }