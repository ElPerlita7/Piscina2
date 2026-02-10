/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jobajo-f <jobajo-f@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 11:15:34 by jobajo-f          #+#    #+#             */
/*   Updated: 2026/02/08 17:45:35 by jobajo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>

int		ft_is_available(int n, int x, int y, int tab[4][4]);
int		ft_print_sudoku(int tab[4][4]);
int		ft_solve(int tab1[4][4], int clues[4][4]);
int		ft_strlen(char *s);
int		ft_is_valid_char(char c);
void	ft_fill_matrix(int tab[4][4]);
void	ft_fill_clues(int tab[4][4], char *argv);
int		ft_count_visible_reverse(int line[4]);
int		ft_putstr(char *str);

#endif
