/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 20:39:20 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/10 22:50:47 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int x;
	int y;
	int sign;

	x = 0;
	y = 0;
	sign = 1;
	while (str[x] == '\t' || str[x] == '\n' ||
			str[x] == '\v' || str[x] == '\f' ||
				str[x] == '\r' || str[x] == ' ')
		x++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		y = (y * 10) + (str[x] - 48);
		x++;
	}
	return (y * sign);
}
