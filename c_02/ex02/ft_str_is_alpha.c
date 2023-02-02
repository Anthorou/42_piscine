/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroussea <aroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:48:37 by aroussea          #+#    #+#             */
/*   Updated: 2023/01/19 14:57:59 by aroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122)
		{
			res++;
			i++;
		}
		else
			i++;
	}
	if (res != 1)
		return (0);
	else
		return (res);
}

int main(void)
{
    char vec[] = "allo";

    int res = ft_str_is_alpha(vec);

    printf("%d", res);

}