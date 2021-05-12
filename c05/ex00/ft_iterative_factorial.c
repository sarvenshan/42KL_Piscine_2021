/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:51:31 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/13 16:50:14 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int x;

	x = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			x = nb * x;
			nb--;
		}
		return (x);
	}
}
