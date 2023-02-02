/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:26:04 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/23 16:57:44 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;
	int	x;

	i = 0;
	y = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		if (str[i] == to_find[x])
		{
			y = i;
			while (str[y] == to_find[x] && to_find[x] != '\0')
			{
				x++;
				y++;
				if (to_find[x] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char haystack[] = "j'espere que tu passe une udsbnfvu bonne journee.";
	char needle[] = "passe";
	char *rep;

	rep = ft_strstr(haystack, needle);
	printf("%s\n", rep);
}