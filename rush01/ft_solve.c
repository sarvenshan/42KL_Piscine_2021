/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:13:52 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 14:33:55 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_board(int **board, int **constraints, int n);

int	shift(int **arr, int length, int n)
{
	int i;

	i = length - 1;
	while (i >= 0)
	{
		if (*arr[i] > n && i - 1 >= 0)
		{
			*arr[i - 1] = *arr[i - 1] + 1;
			*arr[i] = 1;
		}
		i--;
	}
	if (*arr[0] > n)
		return (1);
	return (0);
}

int	solve(int **board, int **empty_cells, int **constraints, int n)
{
	int length;

	length = 0;
	while (empty_cells[length])
		length++;
	while (!shift(empty_cells, length, n))
	{
		if (valid_board(board, constraints, n))
			return (1);
		*empty_cells[length - 1] = *empty_cells[length - 1] + 1;
	}
	return (0);
}
