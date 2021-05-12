/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:28:36 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/06 19:40:58 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_lowercase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 'a' || str[x] > 'z')
			return (0);
		x++;
	}
	return (1);
}
