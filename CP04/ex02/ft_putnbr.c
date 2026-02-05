/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrer- <aferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:54:15 by aferrer-          #+#    #+#             */
/*   Updated: 2026/02/05 14:54:16 by aferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb <= 9)
	{
		num = nb + '0';
		write(1, &num, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		num = nb % 10 + '0';
		write(1, &num, 1);
	}
}
// #include <limits.h>
// int main()
// {
// 	ft_putnbr(INT_MIN);
// 	write (1, "\n", 1);
// 	ft_putnbr(INT_MAX);
// 	write (1, "\n", 1);
// 	ft_putnbr(999);
// 	write (1, "\n", 1);
// 	ft_putnbr(666);
// 	write (1, "\n", 1);
// 	ft_putnbr(-777);
// 	write (1, "\n", 1);
// 	ft_putnbr(0);
// }
