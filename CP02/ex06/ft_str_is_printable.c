int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int	main()
// {
//     char tests[] = {0, 9, 10, 31, 32, 65, 127};
//     char s[2];
//     int i = 0;

//     while (i < 7)
//     {
//         s[0] = tests[i];
//         s[1] = '\0';

//         printf("ASCII %3d -> %d\n", tests[i], ft_str_is_printable(s));
//         i++;
//     }
// }
