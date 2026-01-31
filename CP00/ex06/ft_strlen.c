int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main()
// {
// 	ft_strlen("Que estas leyendo?\n");
// }
