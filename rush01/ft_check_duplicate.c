/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:13:25 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 11:12:36 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_duplicate_other_row(int **board, int *row, int r_index, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (board[j][i] && row[i] == board[j][i] && j != r_index)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_duplicate_other_column(int **board, int *column, int c_index, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (board[i][j] && column[i] == board[i][j] && j != c_index)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
