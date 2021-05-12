/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:24:59 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/08 11:12:51 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while ((str[x] != '\0') && (to_find[y] != '\0') && (str[x] != to_find[y]))
	{
		if (str[x] == to_find[y])
			y++;
		x++;
	}
	return (&str[x]);
}
