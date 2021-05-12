/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 18:43:40 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/06 16:57:25 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	char x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] < 'A' || str[x] > 'Z') && (str[x] < 'a' || str[x] > 'z'))
			return (0);
		x++;
	}
	return (1);
}
