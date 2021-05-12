/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:17:53 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 14:29:29 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*rev_int_tab(int *arr, int n)
{
	int i;
	int *new_rev;

	new_rev = malloc(sizeof(int) * n);
	i = 0;
	while (i < n / 2)
	{
		new_rev[i] = arr[n - i - 1];
		new_rev[n - i - 1] = arr[i];
		i++;
	}
	return (new_rev);
}

int	get_views_count(int *row, int n)
{
	int count;
	int i;
	int largest;

	count = 0;
	largest = 0;
	i = 0;
	while (i < n)
	{
		if (row[i] > largest)
		{
			count++;
			largest = row[i];
		}
		i++;
	}
	return (count);
}

int	**get_empty_cells(int **board, int n)
{
	int i;
	int j;
	int length;
	int **empty_cells;

	i = 0;
	length = 0;
	empty_cells = (int **)malloc(sizeof(int *) * (n * n));
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (!board[i][j])
			{
				empty_cells[length] = &board[i][j];
				*empty_cells[length] = 1;
				length++;
			}
			j++;
		}
		i++;
	}
	return (empty_cells);
}

int	ft_modulo_four(int n)
{
	if (n % 4 == 0)
		return (n / 4);
	return (0);
}
