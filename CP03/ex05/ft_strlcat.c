unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	int				i;
	int				j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	dest_len = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (i < (int)size && dest[i] != '\0')
		i++;
	dest_len = i;
	while (i < (int)(size - 1) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (dest_len < size)
		dest[i] = '\0';
	return (dest_len + src_len);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char			dest[100];
// 	char			src[] = "CogemelaQuemePesa";
// 	unsigned int	len;

// 	dest[0] = '\0';
// 	ft_strlcat(dest, "KilloCabesa ,", 100);
// 	len = ft_strlcat(dest, src, 100);
// 	printf("%s\n", dest);
// 	printf("Longitud: %u\n", len);
// 	return (0);
// }
