/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:19:29 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/18 16:13:01 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char a[] = "allo";
//     char b[1024];
// 	unsigned int n;

// 	n = 96;
//     ft_strncpy(b, a, n);

// 	int i;
// 	i = 0;
// 	while(b[i] != '\0')
// 	{
// 		write(1, &b[i], 1);
// 		i++;
// 	}
// }
