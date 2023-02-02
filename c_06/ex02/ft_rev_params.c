/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:10:05 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/19 15:00:04 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		y;
	char	*v;

	y = 0;
	i = argc - 1;
	while (i > 0)
	{
		v = argv[i];
		while (v[y] != '\0')
		{
			write(1, &v[y], 1);
			y++;
		}
		write(1, "\n", 1);
		i--;
		y = 0;
	}
	return (0);
}
