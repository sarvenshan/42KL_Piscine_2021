/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:17:57 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 17:11:10 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_modulo_four(int n);
int		get_n(char *str);
int		**create_board(int n);
int		*ft_split(char *str, int n);
void	print_boards(int **board, int n);
int		**get_empty_cells(int **board, int n);
int		validate_constraints(int **constraints, int n);
int		**format_constraints(int *constraint, int n);
void	fill_largest(int **board, int **constraints, int n);
void	fill_smallest(int **board, int **constraints, int n);
int		solve(int **board, int **empty_cells, int **constraints, int n);

int		solution(int n, int **constraints)
{
	int **board;
	int **empty_cells;

	board = create_board(n);
	fill_largest(board, constraints, n);
	fill_smallest(board, constraints, n);
	empty_cells = get_empty_cells(board, n);
	if (empty_cells[0] && *empty_cells[0])
	{
		if (solve(board, empty_cells, constraints, n))
			print_boards(board, n);
		else
			write(1, "Error: No solution found\n", 26);
	}
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_n(int n)
{
	char c;

	c = n + '0';
	write(1, "N: ", 3);
	write(1, &c, 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		n;
	int		**constraints;
	int		*inputs;

	if (argc != 2)
	{
		write(1, "Error: Doesn't have input\n", 27);
		return (0);
	}
	n = ft_modulo_four(get_n(argv[1]));
	print_n(n);
	inputs = ft_split(argv[1], n);
	constraints = format_constraints(ft_split(argv[1], n), n);
	if (inputs[0] == -1 || n == 0)
	{
		write(1, "Error: Input must be n * n amount and be digit\n", 48);
		return (0);
	}
	if (validate_constraints(constraints, n))
	{
		solution(n, constraints);
		return (0);
	}
	return (0);
}
