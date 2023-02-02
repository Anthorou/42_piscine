/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 12:16:41 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/15 13:23:23 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_strlowcase(char str, int i)
{
	if (i == 0)
	{
		if (str < 91 && str > 64)
		{
			str = str + 32;
		}
		return (str);
	}
	else
	{
		if (str > 96 && str < 123)
		{
			str = str - 32;
		}
		return (str);
	}
}

int	check_if_letter(char c)
{
	int	rep;

	rep = 0;
	if (c > 96 && c < 123)
	{
		rep = 1;
	}
	else if (c > 64 && c < 91)
		rep = 1;
	return (rep);
}

int	check_ifletter_before(char c)
{
	int	i;
	int	rep;

	i = check_if_letter(c);
	if (i == 1)
		rep = 0;
	else
	{
		if (c > 48 && c < 57)
		{
			rep = 0;
		}
		else
			rep = 1;
	}
	return (rep);
}

char	*changer_lettre(char *str)
{
	int	ifletter;
	int	ifletterbefore;

	if (*str < 65 || *str > 90)
	{
		ifletter = check_if_letter(*str);
		if (ifletter == 1)
		{
			ifletterbefore = check_ifletter_before(str[-1]);
			if (ifletterbefore == 1)
				*str = ft_strlowcase(*str, 1);
		}
	}
	else
	{
		ifletterbefore = check_ifletter_before(str[-1]);
		if (ifletterbefore == 0)
			*str = ft_strlowcase(*str, 0);
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	ifletter;
	int	i;

	i = -1;
	while (*str != '\0')
	{
		if (i == -1)
		{
			ifletter = check_if_letter(*str);
			if (ifletter == 1)
				*str = ft_strlowcase(*str, 1);
			str++;
		}
		else
		{
			changer_lettre(str);
			str++;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char v[] = "salut, comment tu vas ?
// 42mots QuarAnte-deux; cinquante+et+un";

//     ft_strcapitalize(v);

//     int i = 0;
//     char b;

//     while(v[i] != '\0')
//     {
//         b = v[i];
//         write(1, &b, 1);
//         i++;
//     }
// }