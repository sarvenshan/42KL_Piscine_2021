/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuniand <smuniand@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:25:23 by smuniand          #+#    #+#             */
/*   Updated: 2021/04/14 15:18:39 by smuniand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while ((s1[x] != 0) && (s2[x] != 0) && (s1[x] == s2[x]))
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}

void	ft_swap(char **a, char **b)
{
	char *y;

	y = *a;
	*a = *b;
	*b = y;
}

void	bubble(int argc, char **argv)
{
	int z;
	int i;

	z = 1;
	i = 1;
	while (z < argc)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		z++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	bubble(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
