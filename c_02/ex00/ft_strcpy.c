/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:14:31 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/13 15:18:38 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//     char source[] = "allo l'ami(e).";
//     char dest[1024];

//     ft_strcpy(dest, source);

// 	int c = 0;

//     while(dest[c] != '\0')
//     {
//         write(1, &dest[c], 1);
// 		c++;
//     }
// }
