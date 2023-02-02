/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:52:20 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/23 15:09:57 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				cmp;

	cmp = 0;
	i = 0;
	while (dest[cmp] != '\0')
	{
		cmp++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[cmp] = src[i];
		i++;
		cmp++;
	}
	dest[cmp] = '\0';
	return (dest);
}

int main(void)
{
	char dest[25] = "bien le ";
	char src[] = "bonjour!";
	unsigned int i = 4;

	ft_strncat(dest, src, i);
	printf("%s\n", dest);
}