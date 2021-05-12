/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:54:18 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/07 12:22:57 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int x;

	if (str[0] > 96 && str[0] < 123)
		str[0] -= 32;
	x = 1;
	while (str[x] != '\0')
	{
		if ((str[x] > 32 && str[x] < 48) || (str[x] > 90 && str[x] < 97) || (str[x] > 122 && str[x] < 127) || str[x] == ' ')
		{
			if (str[x + 1] > 96 && str[x + 1] < 123)
				str[x + 1] -= 32;
		}
		else if (str[x + 1] > 64 && str[x + 1] < 91)
			str[x + 1] += 32;
		x++;
	}
	return (str);
}
