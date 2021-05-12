/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 20:22:02 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/13 20:32:31 by smuniand         ###   ########.fr       */
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

	x = argc - 1;
	while (x > 0)
	{
		while (argv[x][y] != 0)
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		y = 0;
		x--;
		ft_putchar('\n');
	}
}
