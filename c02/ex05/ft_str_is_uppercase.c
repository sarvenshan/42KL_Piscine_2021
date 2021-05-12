/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:43:17 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/06 20:07:05 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || str[x] > 'Z')
			return (0);
		x++;
	}
	return (1);
}
