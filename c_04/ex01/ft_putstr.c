/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:11:39 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/18 13:06:41 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	v;

	i = 0;
	while (str[i] != '\0')
	{
		v = str[i];
		write(1, &v, 1);
		i++;
	}
}

// int main(void)
// {
// 	char v[] = "bien le bonjour!";

// 	ft_putstr(v);
// }