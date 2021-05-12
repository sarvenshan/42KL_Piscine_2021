/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:54:32 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/01 18:59:39 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int rx;
	int rtab;

	x = 0;
	rx = size - 1;
	while (x < (size / 2))
	{
		rtab = tab[x];
		tab[x] = tab[rx];
		tab[rx] = rtab;
		x++;
		rx--;
	}
}
