/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:45:37 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/13 18:07:51 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int y;

	y = 0;
	(void)argc;
	while (argv[0][y] != 0)
	{
		ft_putchar(argv[0][y]);
		y++;
	}
	ft_putchar('\n');
}
