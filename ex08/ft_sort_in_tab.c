void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;

	*a = *b;
	*b = tmp;
}
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	flag;

	if (size <= 1)
		return ;

	flag = 0;
	while (!flag)
	{
		flag = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				flag = 0;
			}
			i++;
		}
	}
}
// #include <unistd.h>
// #include <stdio.h>
// int main(void)
// {
// 	int tab[] = {5, 2, 9, 1, 6, 3};
// 	int size = sizeof(tab) / sizeof(tab[0]);
// 	int i = 0;

// 	printf("Array original: ");
// 	while (i < size)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	write (1, "\n", 1);
// 	ft_sort_int_tab(tab, size);

// 	i = 0;
// 	printf("Array ordenado ascendente: ");
// 	while (i < size)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	write (1, "\n", 1);
// }
