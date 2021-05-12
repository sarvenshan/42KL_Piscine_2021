/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 21:15:13 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/06 21:26:25 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != 0)
	{
		if (str[x] > 64 && str[x] < 91)
			str += 32;
		x++;
	}
	return (str);
}
