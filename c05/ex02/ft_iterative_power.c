/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:31:32 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/12 14:33:02 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int x;
	int y;

	x = 1;
	y = nb;
	if (power < 0)
		return (0);
	else if (power == 0 || nb == 1)
		return (1);
	else
	{
		while (x < power)
		{
			nb = y * nb;
			x++;
		}
		return (nb);
	}
}
