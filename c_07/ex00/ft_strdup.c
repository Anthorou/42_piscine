/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 12:54:08 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/26 14:17:07 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*rep;
	char	*check;

	i = 0;
	while (src[i] != '\0')
		i++;
	check = ((rep = (char *)malloc(1 * (i + 1))));
	if (!check)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		rep[i] = src[i];
		i++;
	}
	rep[i] = '\0';
	return (rep);
}

// int	main(void)
// {
// 	char	v[] = "allo comment ca va?";
// 	char	*rep = ft_strdup(v);
// 	printf("%s\n", rep);
// }