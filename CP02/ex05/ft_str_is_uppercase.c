int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int main()
// {
// 	char *test1 = "9 8 76 5";
// 	char *test2 = "4232434";
// 	char *test3 = "holas";
// 	char *test4 = "porquesiguesmirando";
// 	char *test5 = "666";

// 	printf("Test1: %s -> %d\n", test1, ft_str_is_uppercase(test1));
// 	printf("Test2: %s -> %d\n", test2, ft_str_is_uppercase(test2));
// 	printf("Test3: %s -> %d\n", test3, ft_str_is_uppercase(test3));
// 	printf("Test3: %s -> %d\n", test4, ft_str_is_uppercase(test4));
// 	printf("Test3: %s -> %d\n", test5, ft_str_is_uppercase(test5));
// }
