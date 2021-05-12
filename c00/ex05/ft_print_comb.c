/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:29:36 by smuniand          #+#    #+#             */
/*   Updated: 2021/03/30 15:36:02 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_num(char c1, char c2, char c3)
{
	ft_putchar(c1);
	ft_putchar(c2);
	ft_putchar(c3);
}

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_print_num(x, y, z);
				if (x == '7' && y == '8' && z == '9')
					return ;
				ft_putchar(',');
				ft_putchar(' ');
				z++;
			}
			y++;
		}
		x++;
	}
}
