/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:53:27 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/28 14:14:06 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	lenght_of_new(int size, char **strs, char *sep)
{
	int	i;
	int	y;
	int	x;
	int	temp;

	y = 0;
	i = 0;
	temp = 0;
	x = 0;
	while (sep[x] != '\0')
		x++;
	temp += x * (size -1);
	while (size > 0)
	{
		if (strs[i][y] == '\0')
		{
			i++;
			temp += y;
			y = 0;
			size--;
		}
		else
			y++;
	}
	return (temp);
}

char	*place_sep(char *sep, char *rep, int *x, int *y)
{
	int	b;

	*y = 0;
	b = 0;
	while (sep[b] != '\0')
	{
		rep[*x] = sep[b];
		*x += 1;
		b++;
	}
	return (rep);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rep;
	int		i;
	int		y;
	int		x;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	rep = malloc(1 * (lenght_of_new(size, strs, sep) + 1));
	i = 0;
	y = 0;
	x = 0;
	while (i != (size - 1) || strs[i][y] != '\0')
	{
		if (strs[i][y] == '\0')
		{
			rep = place_sep(sep, rep, &x, &y);
			i++;
		}
		else
			rep[x++] = strs[i][y++];
	}
	rep[x] = '\0';
	return (rep);
}

// int main(void)
// {
// 	char *str[4];
// 	char *str1 = "allo";
// 	char *str2 = "ca va";
// 	char *str3 = "bien?";
// 	char *str4 = "bien?";
// 	int size = 0;
// 	char *sep = " - 8716";

// 	str[0] = str1;
// 	str[1] = str2;
// 	str[2] = str3;
// 	str[3] = str4;

// 	char *rep = ft_strjoin(size, str, sep);
// 	printf("%s\n", rep);
// }