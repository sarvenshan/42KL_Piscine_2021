/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 11:31:30 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/13 11:38:39 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		countbase(char *base)
{
	int x;

	x = 0;
	while (base[x] != '\0')
		x++;
	return (x);
}

int		checkbase(char *base)
{
	int y;

	y = 0;
	while (base[y] != '\0')
	{
		if (countbase(base) < 2 || base[y] == '-' ||
				base[y] == '+' || base[y + 1] == base[y])
		{
			return (0);
		}
		else
		{
			return (1);
		}
		y++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int next;
	char nbrout[next];

	next = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (checkbase(base) == 1)
	{
		while (nbr != 0)
		{
			nbrout[next] = nbr % countbase(base);
			ft_putchar(base[nbrout[next]]);
			nbr = nbr / countbase(base);
			nbrout[next] = nbr % countbase(base);
			next++;
		}
	}
}
