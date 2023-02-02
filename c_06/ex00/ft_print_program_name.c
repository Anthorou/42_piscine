/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:59:51 by aroussea          #+#    #+#             */
/*   Updated: 2023/02/02 12:23:10 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*v;
	int		i;

	v = argv[0];
	i = 0;
	while (v[i] != '\0')
	{
		write(1, &v[i], 1);
		i++;
	}
	write(1, "\n", 1);
	(void) argc;
	return (0);
}
