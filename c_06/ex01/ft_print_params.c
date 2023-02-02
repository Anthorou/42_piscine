/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:45:33 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/19 13:05:56 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		y;
	char	*v;

	i = 1;
	y = 0;
	while (i < argc)
	{
		v = argv[i];
		while (v[y] != '\0')
		{
			write(1, &v[y], 1);
			y++;
		}
		write(1, "\n", 1);
		i++;
		y = 0;
	}
	return (0);
}
