/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:46:47 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/31 16:37:39 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

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

int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[4097];

	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	i = read(fd, buf, 4096);
	buf[i] = '\0';
	ft_putstr(buf);
	close(fd);
	return (0);
}
