/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:19:29 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/31 17:17:20 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	x;

	x = 97;
	while (x <= 122)
	{
		write(1, &x, 1);
		++x;
	}
	return ;
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
