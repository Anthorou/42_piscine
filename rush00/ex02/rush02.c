/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:30:49 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/15 14:09:13 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int len, char f_char, char m_char, char l_char)
{
	int	letter_c;

	letter_c = 1;
	while (letter_c <= len)
	{
		if (letter_c == 1)
			ft_putchar(f_char);
		else if (letter_c == len)
			ft_putchar(l_char);
		else
			ft_putchar(m_char);
		letter_c++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	line_c;

	line_c = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_c <= y)
		{
			if (line_c == 1)
				ft_print(x, 'A', 'B', 'A');
			else if (line_c == y)
				ft_print(x, 'C', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			line_c++;
		}
	}
}
