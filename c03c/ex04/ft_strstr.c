/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:24:59 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/10 15:25:50 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while ((str[x] != '\0') && (to_find[y] != '\0'))
	{
		while (str[x + y] == to_find[y])
		{
			if (to_find[y + 1] == '\0')
				return (&str[x]);
			y++;
		}
		y =0;
		x++;
	}
	return (0);
}
