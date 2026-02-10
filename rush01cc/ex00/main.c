/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobajo-f <jobajo-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:14:04 by jobajo-f          #+#    #+#             */
/*   Updated: 2026/02/08 18:52:28 by jobajo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
	return (-1);
}

static int	ft_check_invalid_char(char *argv, int *i, int *prev_space)
{
	if (argv[*i] == ' ')
	{
		if (*prev_space == 0)
		{
			*i = *i + 1;
			*prev_space = 1;
			return (1);
		}
		else
			return (0);
	}
	else
		return (0);
}

static int	ft_check_arguments(char *argv)
{
	int	i;
	int	prev_space;

	i = 0;
	prev_space = 0;
	while (argv[i])
	{
		if (!ft_is_valid_char(argv[i]))
		{
			if (!ft_check_invalid_char(argv, &i, &prev_space))
				return (0);
		}
		else
		{
			prev_space = 0;
			i++;
		}
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	tab1[4][4];
	int	clues[4][4];

	if (argc != 2)
		return (ft_putstr("Error\n"));
	if (ft_strlen(argv[1]) != 31)
		return (ft_putstr("Error\n"));
	if (ft_check_arguments(argv[1]) != 1)
		return (ft_putstr("Error\n"));
	ft_fill_matrix(tab1);
	ft_fill_clues(clues, argv[1]);
	return (ft_solve(tab1, clues));
}
