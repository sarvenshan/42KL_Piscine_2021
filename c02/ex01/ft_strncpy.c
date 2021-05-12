/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:08:45 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/06 15:00:08 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*destx;
	unsigned int	i;

	i = 0;
	destx = dest;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
		if (dest[i + 1] == '\0')
			break ;
	}
	return (destx);
}
