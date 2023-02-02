/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:34:23 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/13 11:01:07 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

// int main(void)
// {
// 	char *str;

// 	str = "allo comment allez-vous? moi je vais tres bien";

// 	int num = ft_strlen(str);
// 	printf("Il y a %d charactères", num);

// }
