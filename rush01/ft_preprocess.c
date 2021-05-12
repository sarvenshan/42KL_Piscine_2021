/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preprocess.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:13:43 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 10:44:01 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_ctraints_largest_index(int *constraints, int n);
int		get_ctraints_smallest_index(int *constraints, int n);
void	insert_row(int **board, int *row, int r_index, int n);
void	insert_column(int **board, int *column, int c_index, int n);

int		*generate_array(int n, int descend)
{
	int *arr;
	int i;

	arr = malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		if (descend)
			arr[i] = n - i;
		else
			arr[i] = i + 1;
		i++;
	}
	return (arr);
}

void	fill_largest(int **board, int **cs, int n)
{
	int *ascending;
	int *descending;
	int c_i;

	ascending = generate_array(n, 0);
	descending = generate_array(n, 1);
	c_i = get_ctraints_largest_index(cs[0], n);
	if (cs[0][c_i] == n)
		insert_column(board, ascending, c_i, n);
	c_i = get_ctraints_largest_index(cs[2], n);
	if (cs[2][c_i] == n)
		insert_row(board, ascending, c_i, n);
	c_i = get_ctraints_largest_index(cs[1], n);
	if (cs[1][c_i] == n)
		insert_column(board, descending, c_i, n);
	c_i = get_ctraints_largest_index(cs[3], n);
	if (cs[3][c_i] == n)
		insert_row(board, descending, c_i, n);
	free(ascending);
	free(descending);
}

void	fill_smallest(int **board, int **cs, int n)
{
	int c_i;

	c_i = get_ctraints_smallest_index(cs[0], n);
	if (cs[0][c_i] == 1)
		board[0][c_i] = n;
	c_i = get_ctraints_smallest_index(cs[2], n);
	if (cs[2][c_i] == 1)
		board[c_i][0] = n;
	c_i = get_ctraints_smallest_index(cs[1], n);
	if (cs[1][c_i] == 1)
		board[n - 1][c_i] = n;
	c_i = get_ctraints_smallest_index(cs[3], n);
	if (cs[3][c_i] == 1)
		board[c_i][n - 1] = n;
}
