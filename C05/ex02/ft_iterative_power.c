/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrer- <aferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 03:58:18 by aferrer-          #+#    #+#             */
/*   Updated: 2026/02/10 03:58:19 by aferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int result;

    if (power < 0)
        return (0);
    result = 1;
    while (power > 0)
    {
        result = result * nb;
        power--;
    }
    return(result);
}
// #include <stdio.h>

// int main()
// {
//     printf("%d\n", ft_iterative_power(8, 2));
//     printf("%d\n", ft_iterative_power(4, 7));
//     printf("%d\n", ft_iterative_power(5, 2));
//     printf("%d\n", ft_iterative_power(22, 5));
//     printf("%d\n", ft_iterative_power(12, 3));
//     printf("%d\n", ft_iterative_power(-18, -7));
// }