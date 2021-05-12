/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:03:03 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/13 19:58:09 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = 1;
	y = 0;
	while (x < argc)
	{
		while (argv[x][y] != 0)
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		y = 0;
		x++;
		ft_putchar('\n');
	}
}
