/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:06:48 by aroussea          #+#    #+#             */
/*   Updated: 2023/02/01 12:40:49 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	b;

	while (*str != '\0')
	{
		b = *str;
		write(1, &b, 1);
		str++;
	}
}

//#include <stdio.h>
// int main(void)
// {
// 	char *v;

// 	v = "allo comment allez-vous?";
// 	ft_putstr(v);
// }
