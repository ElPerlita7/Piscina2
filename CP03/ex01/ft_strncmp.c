int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return 0;

	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	if (i < n)
		return (s1[i] - s2[i]);

	return 0;
}
// #include <stdio.h>
// int main(void)
// {
//     char s1[] = "HolaKAESA";
//     char s2[] = "HolaaKAESA";

//     printf("Comparar 4 caracteres: %d\n", ft_strncmp(s1, s2, 4));
//     printf("Comparar 5 caracteres: %d\n", ft_strncmp(s1, s2, 5));
//     printf("Comparar 10 caracteres: %d\n", ft_strncmp(s1, s2, 10));

//     return 0;
// }
