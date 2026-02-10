/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrer- <aferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 22:24:30 by aferrer-          #+#    #+#             */
/*   Updated: 2026/02/09 22:44:25 by aferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>

// int ft_ultimate_range(int **range, int min, int max)
// {
//     int i;
//     int size;

//     i = 0;

//     if (min >= max)
//     {
//         *range = NULL;
//         return (0);
//     }

//     size = max - min;
//     *range = malloc(size * sizeof(int));

//     if (*range == NULL)
//         return (-1);

//     while (i < size)
//     {
//         (*range)[i] = min + i;
//         i++;
//     }
//     return (size);
// }

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *tab;

    int i;

    i = 0;
    if (min >= max)
        return (NULL);
    tab = malloc((max - min) * sizeof(int));
    if (!tab)
        return (NULL);
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    return (tab);
}
int ft_ultimate_range(int **range, int min, int max)
{
    *range = 0;

    if (min >= max)
        return (0);
    *range  = ft_range(min, max);
    if (!*range)
        return (-1);
    return (max - min);
}
// #include <stdio.h>
// int main(void)
// {
//     int min = 2;
//     int max = 15;
//     int *range;
//     int i = 0;
//     int result;
//     result = ft_ultimate_range(&range, min, max);
//     if (range)
//     {
//         while (i < (max - min))
//         {
//             printf("%d\n", range[i]);
//             i++;
//         }
//         free(range);
//     }
//     else
//     {
//         printf("Error: no se pudo asignar memoria.\n");
//     }
//     return (0);
// }