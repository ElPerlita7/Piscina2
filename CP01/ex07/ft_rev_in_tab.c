void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
// #include <stdio.h>

// int main(void)
// {
// 	int tab[] = {666, 420, 777, 999, 5, 6};
// 	int size = sizeof(tab) / sizeof(tab[0]);
// 	int i = 0;

// 	ft_rev_int_tab(tab, size);

// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}

// 	return (0);
// }
