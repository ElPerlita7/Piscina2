/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrer- <aferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 03:21:45 by aferrer-          #+#    #+#             */
/*   Updated: 2026/02/12 04:41:04 by aferrer-         ###   ########.fr       */
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
char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

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
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *tab;
    
    int i;
    tab = malloc(sizeof(t_stock_str) * (ac + 1));
    if (!tab)
        return (NULL);
    tab->size = ft_strlen(av[0]);
    tab->copy = ft_strdup(av[0]);
    tab->str = av[0];
    while (av[0][i] != '\0')
    {
        i++;
    }
}
