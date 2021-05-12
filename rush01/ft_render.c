/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_render.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchai <cchai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 10:13:48 by cchai             #+#    #+#             */
/*   Updated: 2021/04/04 11:16:23 by cchai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_boards(int **board, int n)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (!board[i][j])
				c = '0';
			else
				c = board[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
