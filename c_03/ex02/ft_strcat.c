/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:53:06 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/17 10:10:55 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	cmp;

	cmp = 0;
	i = 0;
	while (dest[cmp] != '\0')
	{
		cmp++;
	}
	while (src[i] != '\0')
	{
		dest[cmp] = src[i];
		i++;
		cmp++;
	}
	dest[cmp] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char dest[25] = "bien le 42";
// 	char src[] = "bonjour!";

// 	ft_strcat(dest, src);
// 	printf("%s\n", dest);
// }
