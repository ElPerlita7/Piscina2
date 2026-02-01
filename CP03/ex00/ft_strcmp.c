int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
//     char str1[] = "Kpasa";
//     char str2[] = "Cabesa";
//     char str3[] = "Cogemela";
//     char str4[] = "Quemepesa";

//     printf("Comparar str1 y str2: %d\n", ft_strcmp(str1, str2));
//     printf("Comparar str1 y str3: %d\n", ft_strcmp(str1, str3));
//     printf("Comparar str1 y str4: %d\n", ft_strcmp(str1, str4));
//     printf("Comparar str4 y str1: %d\n", ft_strcmp(str4, str1));

//     return 0;
// }
