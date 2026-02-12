/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abferrer <abferrer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 03:21:45 by aferrer-          #+#    #+#             */
/*   Updated: 2026/02/12 06:33:33 by abferrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <stdlib.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char *ft_strdup(char *src)
{
	char *dup;
	int i;

	i = 0;
	dup = malloc(ft_strlen(src) + 1);
	if (!dup)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
char *free_matrix(t_stock_str *tab)
{
	int i;

	i = 0;
	while (i > 0)
			{
				i--;
				free(tab[i].copy);
			}
			free(tab);
			return NULL;
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *tab;

	int i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		tab[i].str = av[i];
		if(!tab[i].copy)
			free_matrix(tab);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = NULL;
	tab[i].copy = NULL;

	return (tab);
}
#include <stdio.h>
#include "ft_stock_str.h"

int main(void)
{
    char *arr[] = {"Keloke", "Papi", "C"};
    int size = 3;

    t_stock_str *res = ft_strs_to_tab(size, arr);

    int i = 0;
    while (res[i].str != NULL)
    {
        printf("%s %s %d\n", res[i].str, res[i].copy, res[i].size);
        i++;
    }

    return 0;
}
