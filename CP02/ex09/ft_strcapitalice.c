char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	char str[] = "Josee acion activa";

// 		printf("%s", ft_strcapitalize(str));
// 		i++;
// }
