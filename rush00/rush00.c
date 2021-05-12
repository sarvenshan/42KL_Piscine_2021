/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvivekan <tvivekan@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 10:51:44 by tvivekan          #+#    #+#             */
/*   Updated: 2021/03/28 18:09:37 by tvivekan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_body(int x1)
{
	int width1;

	width1 = x1 - 2;
	ft_putchar('|');
	while (width1 > 0)
	{
		ft_putchar(' ');
		width1--;
	}
	if (x1 > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	ft_header(int x2)
{
	int width2;

	width2 = x2 - 2;
	ft_putchar('o');
	while (width2 > 0)
	{
		ft_putchar('-');
		width2--;
	}
	if (x2 > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		length;
	int		width;

	length = x - 2;
	width = y - 2;
	if (x > 0 && y > 0)
	{
		ft_header(x);
		while (width > 0)
		{
			ft_body(x);
			width--;
		}
		if (y > 1)
		{
			ft_header(x);
		}
	}
}
