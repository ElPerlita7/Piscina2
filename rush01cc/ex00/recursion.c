/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobajo-f <jobajo-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:12:20 by jobajo-f          #+#    #+#             */
/*   Updated: 2026/02/08 17:51:50 by jobajo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

static int	ft_count_visible(int line[4])
{
	int	i;
	int	max;
	int	visible;

	max = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible++;
		}
		i++;
	}
	return (visible);
}

static int	ft_check_columns(int grid[4][4], int clues[4][4], int y)
{
	int	i;
	int	line[4];

	i = 0;
	while (i < 4)
	{
		if (grid[i][y] == 0)
			break ;
		i++;
	}
	if (i == 4)
	{
		i = 0;
		while (i < 4)
		{
			line[i] = grid[i][y];
			i++;
		}
		if ((ft_count_visible(line) != clues[0][y])
				|| (ft_count_visible_reverse(line) != clues[1][y]))
			return (0);
	}
	return (1);
}

static int	ft_partial_check(int grid[4][4], int clues[4][4], int x, int y)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[x][i] == 0)
			break ;
		i++;
	}
	if (i == 4)
	{
		if ((ft_count_visible(grid[x]) != clues[2][x])
				|| (ft_count_visible_reverse(grid[x]) != clues[3][x]))
			return (0);
	}
	if (ft_check_columns(grid, clues, y) != 1)
		return (0);
	return (1);
}

static int	ft_recursion(int grid[4][4], int clues[4][4], int pos)
{
	int	x;
	int	y;
	int	num;

	if (pos == 4 * 4)
		return (1);
	x = pos / 4;
	y = pos % 4;
	if (grid[x][y] != 0)
		return (ft_recursion(grid, clues, pos + 1));
	num = 1;
	while (num <= 4)
	{
		if (ft_is_available(num, x, y, grid))
		{
			grid[x][y] = num;
			if (ft_partial_check(grid, clues, x, y)
				&& ft_recursion(grid, clues, pos + 1))
				return (1);
			grid[x][y] = 0;
		}
		num++;
	}
	return (0);
}

int	ft_solve(int tab1[4][4], int clues[4][4])
{
	if (ft_recursion(tab1, clues, 0) != 1)
		return (ft_putstr("Error\n"));
	return (ft_print_sudoku(tab1));
}
