/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_constraints.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:13:37 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 16:56:04 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_ctraints_largest_index(int *constraints, int n)
{
	int i;
	int largest;
	int index_largest;

	largest = 0;
	i = 0;
	index_largest = 0;
	while (i < n)
	{
		if (constraints[i] > largest)
		{
			index_largest = i;
			largest = constraints[i];
		}
		i++;
	}
	return (index_largest);
}

int	get_ctraints_smallest_index(int *constraints, int n)
{
	int i;
	int smallest;
	int index_smallest;

	smallest = n;
	i = 0;
	index_smallest = 0;
	while (i < n)
	{
		if (constraints[i] < smallest)
		{
			index_smallest = i;
			smallest = constraints[i];
		}
		i++;
	}
	return (index_smallest);
}

int	*get_constraints(int **cs, int i, int j)
{
	int *res;

	res = (int *)malloc(sizeof(int *) * 4);
	res[0] = cs[0][j];
	res[1] = cs[3][i];
	res[2] = cs[1][j];
	res[3] = cs[2][i];
	return (res);
}
