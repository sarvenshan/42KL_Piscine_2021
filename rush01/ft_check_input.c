/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 15:02:08 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 16:38:17 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_constraints_all_same(int **constraints, int n)
{
	int i;
	int j;
	int constraint;

	i = 0;
	j = 0;
	constraint = constraints[0][0];
	while (i < n)
	{
		while (j < n)
		{
			if (constraint != constraints[i][j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_total_less_than_n(int **constraints, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (constraints[0][i] + constraints[1][i] > n + 1)
			return (0);
		if (constraints[2][i] + constraints[3][i] > n + 1)
			return (0);
		i++;
	}
	return (1);
}

int	is_within_n_range(int **constraints, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (constraints[i][j] < 1 || constraints[i][j] > n)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	validate_constraints(int **constraints, int n)
{
	if (!is_within_n_range(constraints, n))
	{
		write(1, "Error: Input is not within 1 and n\n", 36);
		return (0);
	}
	if (!is_total_less_than_n(constraints, n))
	{
		write(1, "Error: No solution found\n", 26);
		return (0);
	}
	if (is_constraints_all_same(constraints, n))
	{
		write(1, "Error: No solution found\n", 26);
		return (0);
	}
	return (1);
}
