char *ft_strncat(char *dest, const char *src, unsigned int nb)
{
	int	i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int main(void)
// {
//     char src[] = "CogemelaQuemePesa";
//     char dest[100] = "KilloCabesa ,";

//     printf("%s\n", ft_strncat(dest, src, 100));

//     return 0;
// }
