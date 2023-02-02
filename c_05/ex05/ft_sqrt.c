/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 10:28:01 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/24 10:45:29 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < (nb / i))
		i++;
	if (nb == (i * i))
		return (i);
	else
		return (0);
}

// int main(void)
// {
//     int i = ft_sqrt(25);
//     printf("%d", i);
// }
