/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrer- <aferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:54:12 by aferrer-          #+#    #+#             */
/*   Updated: 2026/02/05 19:04:44 by aferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char *str1 = "  ---+--+1234ab567";
// 	char *str2 = "++--42";
// 	char *str3 = "   ++++100";
// 	char *str4 = "  -+-+0";
// 	char *str5 = "   987";
// 	char *str6 = "  -123abc";
// 	char *str7 = "   +0";

// 	printf("'%s' -> %d\n", str1, ft_atoi(str1)); // -1234
// 	printf("'%s' -> %d\n", str2, ft_atoi(str2)); // 42
// 	printf("'%s' -> %d\n", str3, ft_atoi(str3)); // 100
// 	printf("'%s' -> %d\n", str4, ft_atoi(str4)); // 0
// 	printf("'%s' -> %d\n", str5, ft_atoi(str5)); // 987
// 	printf("'%s' -> %d\n", str6, ft_atoi(str6)); // -123
// 	printf("'%s' -> %d\n", str7, ft_atoi(str7)); // 0

// 	return (0);
// }
