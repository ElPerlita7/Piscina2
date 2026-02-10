/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobajo-f <jobajo-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:57:19 by jobajo-f          #+#    #+#             */
/*   Updated: 2026/02/08 17:44:10 by jobajo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_valid_char(char c)
{
	if (c >= '1' && c <= '4')
		return (1);
	else
		return (0);
}

void	ft_fill_matrix(int tab[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_fill_clues(int tab[4][4], char *argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (argv[k] >= '1' && argv[k] <= '4')
			{
				tab[i][j] = (argv[k] - '0');
				j++;
			}
			k++;
		}
		i++;
	}
}

int	ft_count_visible_reverse(int line[4])
{
	int	i;
	int	max;
	int	visible;

	max = 0;
	visible = 0;
	i = 3;
	while (i >= 0)
	{
		if (line[i] > max)
		{
			max = line[i];
			visible++;
		}
		i--;
	}
	return (visible);
}
