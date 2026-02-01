int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int main()
// {
// 	char *test1 = "HolaMundo";
// 	char *test2 = "Hola123";
// 	char *test3 = "(/)U¨=)=Ç";
// 	char *test3 = "PorqueSiguesMirando?";
// 	char *test4 = "9, 8 , 7";

// 	printf("Test1: %s -> %d\n", test1, ft_str_is_alpha(test1));
// 	printf("Test2: %s -> %d\n", test2, ft_str_is_alpha(test2));
// 	printf("Test3: %s -> %d\n", test3, ft_str_is_alpha(test3));
// 	printf("Test3: %s -> %d\n", test4, ft_str_is_alpha(test4));
// }
