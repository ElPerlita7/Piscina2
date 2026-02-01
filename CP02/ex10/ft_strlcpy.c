unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (0);

	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	dest[i] = '\0';

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return(i);
}
// #include <stdio.h>
// int main(void)
// {
//     char src[] = "QueEstasMirando Tu?";
//     char dest[50];

// 	printf("Destino: %s\n", dest);
//     ft_strlcpy(dest, src, 20);
//     printf("Origen: %s\n", src);
//     printf("Destino: %s\n", dest);
// 	printf("Destino: %s\n", dest);

//     return 0;
// }
