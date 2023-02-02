/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:56:35 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/18 13:05:55 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
// 	char v[] = "allo les 42 amis     !!";

// 	int i = ft_strlen(v);
// 	int b = strlen(v);
// 	printf("%d\n", i);
// 	printf("%d\n", b);
// }
