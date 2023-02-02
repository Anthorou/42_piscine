/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:19:21 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/31 18:40:05 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	string_count(char *str, char *charset)
{
	int	i;
	int	rep;

	i = 0;
	rep = 0;
	while (str[i] != '\0')
	{
		while ((str[i] != '\0') && (check_sep(str[i], charset)))
			i++;
		if (str[i] != '\0')
			rep++;
		while ((str[i] != '\0') && (!check_sep(str[i], charset)))
			i++;
	}
	return (rep);
}

char	*making_string(char *str, char *charset)
{
	int		i;
	int		x;
	char	*string;

	i = 0;
	x = 0;
	while ((check_sep(str[i], charset) != 1) && (str[i] != '\0'))
		i++;
	string = (char *)malloc((sizeof(char) * i) + 1);
	while (x < i)
	{
		string[x] = str[x];
		x++;
	}
	string[x] = '\0';
	return (string);
}

char	**ft_split(char *str, char *charset)
{
	char	**rep;
	int		i;

	rep = (char **)malloc(sizeof(char *) * string_count(str, charset) + 1);
	i = 0;
	while (*str != '\0')
	{
		while ((*str != '\0') && (check_sep(*str, charset)))
			str++;
		if (*str != '\0')
		{
			rep[i] = making_string(str, charset);
			i++;
		}
		while ((*str != '\0') && (!check_sep(*str, charset)))
			str++;
	}
	rep[i] = 0;
	return (rep);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *v = "iKEmi0oqWoLYSGjoihZ9g5Qjacw71IuGJsx36Q";
// 	char *sep = "";
// 	char **rep;
// 	int i = 0;
// 	rep = ft_split(v, sep);
// 	while(rep[i])
// 	{
// 		printf("%s\n", rep[i]);
// 		i++;
// 	}
// }
