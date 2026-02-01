char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int main(void)
// {
//     char src[] = "QueEstasMirando Tu?";
//     char dest[50];

// 	printf("Destino: %s\n", dest);
//     ft_strcpy(dest, src);
//     printf("Origen: %s\n", src);
//     printf("Destino: %s\n", dest);

//     return 0;
// }
