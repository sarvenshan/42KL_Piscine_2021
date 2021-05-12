/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_safe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:13:29 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 17:11:30 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*rev_int_tab(int *arr, int n);
int	get_views_count(int *row, int n);
int	*copy_column(int **board, int c_index, int n);
int	*get_constraints(int **constraints, int i, int j);
int	is_duplicate_other_row(int **board, int *row, int r_index, int n);
int	is_duplicate_other_column(int **board, int *column, int c_index, int n);

int	validate_duplication(int **board, int n)
{
	int i;
	int *current_column;
	int j;

	i = -1;
	while (++i < n)
		if (is_duplicate_other_row(board, board[i], i, n))
			return (0);
	i = -1;
	while (++i < n)
	{
		current_column = malloc(sizeof(int) * n);
		j = 0;
		while (j < n)
		{
			current_column[j] = board[j][i];
			j++;
		}
		if (is_duplicate_other_column(board, current_column, i, n))
			return (0);
		free(current_column);
	}
	return (1);
}

int	validate_row_views(int **board, int **constraints, int n)
{
	int	i;
	int	j;
	int	*constraint;

	i = 0;
	while (i < n)
	{
		j = -1;
		while (++j < n)
			if (!board[i][j])
				break ;
		if (j == n)
		{
			constraint = get_constraints(constraints, i, j);
			if (get_views_count(board[i], n) != constraint[3])
				return (0);
			if (get_views_count(rev_int_tab(board[i], n), n) != constraint[1])
				return (0);
		}
		i++;
	}
	return (1);
}

int	validate_column_views(int **board, int **constraints, int n)
{
	int i;
	int j;
	int *col;
	int *constraint;

	i = 0;
	while (i < n)
	{
		j = -1;
		while (++j < n)
			if (!board[j][i])
				break ;
		if (j == n)
		{
			constraint = get_constraints(constraints, i, i);
			col = copy_column(board, i, n);
			if (get_views_count(col, n) != constraint[0])
				return (0);
			if (get_views_count(rev_int_tab(col, n), n) != constraint[2])
				return (0);
		}
		i++;
	}
	return (1);
}

int	validate_views_count(int **board, int **constraints, int n)
{
	if (!validate_row_views(board, constraints, n))
		return (0);
	if (!validate_column_views(board, constraints, n))
		return (0);
	return (1);
}

int	valid_board(int **board, int **constraints, int n)
{
	if (!validate_duplication(board, n))
		return (0);
	if (!validate_views_count(board, constraints, n))
		return (0);
	return (1);
}
