/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrer- <aferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:57:02 by aferrer-          #+#    #+#             */
/*   Updated: 2026/02/10 21:07:02 by aferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (i < nb)
	{
		if (nb % i == 0)
			return (nb);
		i++;
		nb++;
	}
	return (nb);
}
#include <stdio.h>

int main()
{
	printf("%d", ft_find_next_prime(8));
	printf("%d", ft_find_next_prime(9));
	printf("%d", ft_find_next_prime(14));
	printf("%d", ft_find_next_prime(7));
	printf("%d", ft_find_next_prime(-11));
	printf("%d", ft_find_next_prime(13));
	printf("%d", ft_find_next_prime(0));
}