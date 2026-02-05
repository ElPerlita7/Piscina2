/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aferrer- <aferrer-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:54:20 by aferrer-          #+#    #+#             */
/*   Updated: 2026/02/05 14:54:21 by aferrer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	char	*str;
// 	int		len;

// 	str = "CuantoMeMide";
// 	len = ft_strlen(str);
// 	printf("La longitud de '%s' es: %d\n", str, len);

// 	str = "";
// 	len = ft_strlen(str);
// 	printf("La longitud de la cadena vacía es: %d\n", len);

// 	return (0);
// }
