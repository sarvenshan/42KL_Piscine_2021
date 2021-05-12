ft_/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 20:12:36 by smuniand          #+#    #+#             */
/*   Updated: 2021/03/30 15:39:45 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_num(int a1, int b1)
{
	ft_putchar((a1 / 10) + '0');
	ft_putchar((a1 % 10) + '0');
	ft_putchar(' ');
	ft_putchar((b1 / 10) + '0');
	ft_putchar((b1 % 10) + '0');
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_num(x, y);
			if (x == 98 && y == 99)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
			y++;
		}
		x++;
	}
}
