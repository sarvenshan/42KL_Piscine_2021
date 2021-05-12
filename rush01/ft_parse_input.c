/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:13:40 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 16:36:08 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	fill_constraints(int *constraint, int **array_2d, int root)
{
	int i;
	int k;
	int m;

	i = 0;
	k = 0;
	m = 0;
	while (i < root)
	{
		while (k < root)
		{
			array_2d[i][k] = constraint[m];
			k++;
			m++;
		}
		i++;
		k = 0;
	}
}

int		**format_constraints(int *constraint, int n)
{
	int i;
	int **array_2d;

	array_2d = (int **)malloc(n * sizeof(int *));
	i = 0;
	while (i < n)
	{
		array_2d[i] = (int *)malloc(n * sizeof(int));
		i++;
	}
	fill_constraints(constraint, array_2d, n);
	return (array_2d);
}

int		*ft_split(char *str, int n)
{
	int i;
	int j;
	int *constraint;

	i = 0;
	j = 0;
	constraint = malloc(n * n * sizeof(int));
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
		{
			constraint[j] = str[i] - '0';
			j++;
		}
		if (str[i] != 32 && str[i] < 47 && str[i] > 58)
		{
			i = -1;
			constraint = &i;
			return (constraint);
		}
		i++;
	}
	return (constraint);
}

int		get_n(char *str)
{
	int i;
	int total;

	i = 0;
	total = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
			total++;
		i++;
	}
	return (total);
}
