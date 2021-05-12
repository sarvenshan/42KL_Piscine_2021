/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:13:21 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 11:15:11 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		**create_board(int n)
{
	int i;
	int **new_board;

	new_board = (int **)malloc(sizeof(int *) * n);
	i = 0;
	while (i < n)
	{
		new_board[i] = (int *)malloc(sizeof(int) * n);
		i++;
	}
	return (new_board);
}

int		**copy_board(int **board, int n)
{
	int **new_board;
	int i;
	int j;

	new_board = create_board(n);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			new_board[i][j] = board[i][j];
			j++;
		}
		i++;
	}
	return (new_board);
}

void	insert_row(int **board, int *row, int r_index, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		board[r_index][i] = row[i];
		i++;
	}
}

void	insert_column(int **board, int *column, int c_index, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		board[i][c_index] = column[i];
		i++;
	}
}

int		*copy_column(int **board, int c_index, int n)
{
	int *new_col;
	int i;

	new_col = malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		new_col[i] = board[i][c_index];
		i++;
	}
	return (new_col);
}
