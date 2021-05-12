/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:49:08 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/10 15:16:47 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	while ((x < n) && (s1[x] != '\0' || s2[x] != '\0'))
	{
		if (s1[x] == s2[x])
		{
			x++;
		}
		else
		{
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		}
	}
	return (0);
}
