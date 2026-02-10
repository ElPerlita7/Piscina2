/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrer- <aferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:51:05 by aferrer-          #+#    #+#             */
/*   Updated: 2026/02/10 20:51:06 by aferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
    int i;

    if (nb < 0)
        return (0);
    i = 1;
    while (i * i <= nb)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}
// #include <stdio.h>
// int main()
// {
//     printf("%d\n", ft_sqrt(1));
//     printf("%d\n", ft_sqrt(4));
//     printf("%d\n", ft_sqrt(0));
//     printf("%d\n", ft_sqrt(-10));
//     printf("%d\n", ft_sqrt(16));
//     printf("%d\n", ft_sqrt(25));
// }