int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
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

