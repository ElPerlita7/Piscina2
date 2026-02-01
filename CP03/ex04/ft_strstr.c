char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);

	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
				return (&str[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int main(void)
// {
//     char str[] = "Papaya con maracuya";
//     char sub[] = "con maracuya";

//         printf("Encontrado: %s\n", ft_strstr(str, sub));

//     return 0;
// }
