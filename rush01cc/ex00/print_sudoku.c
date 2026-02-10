/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobajo-f <jobajo-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:34:06 by jobajo-f          #+#    #+#             */
/*   Updated: 2026/02/08 17:44:29 by jobajo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

static int	ft_column_available(int n, int y, int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[i][y] == n)
			return (0);
		i++;
	}
	return (1);
}

static int	ft_row_available(int n, int x, int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[x][i] == n)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_available(int n, int x, int y, int grid[4][4])
{
	if ((ft_column_available(n, y, grid)) != 1)
		return (0);
	if ((ft_row_available(n, x, grid)) != 1)
		return (0);
	return (1);
}

int	ft_print_sudoku(int grid[4][4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = (grid[i][j] + '0');
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
