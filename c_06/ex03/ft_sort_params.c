/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:34:36 by aroussea          #+#    #+#             */
/*   Updated: 2023/02/02 17:02:43 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ecrit_argv(int argc, char **argv)
{
	int	i;
	int	rep;

	rep = 1;
	while (rep < argc)
	{
		i = 0;
		while (argv[rep][i] != '\0')
		{
			write(1, &argv[rep][i], 1);
			i++;
		}
		write(1, "\n", 1);
		rep++;
	}
}

void	changer_place(char **argv, int i)
{
	char	*tmp;

	tmp = argv[i];
	argv[i] = argv[i + 1];
	argv[i + 1] = tmp;
}

int	main(int argc, char **argv)
{
	int		i;
	int		x;

	if (argc == 1)
		return (1);
	if (argc == 2)
	{
		ecrit_argv(argc, argv);
		return (0);
	}
	x = argc - 1;
	while (x != 0)
	{
		i = 1;
		while (i < x)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) == 1)
				changer_place(argv, i);
			i++;
		}
		x--;
	}
	ecrit_argv(argc, argv);
	return (0);
}
