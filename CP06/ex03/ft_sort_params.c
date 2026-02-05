
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

int main(int argc, char **argv)
{
    int i;
    int j;

    j = 1;
    if (argc)
    {
        while (j < argc)
        {
            i = 0;
            while (argv[j][i] != '\0')
            {
                if ()
                write(1, &argv[j][i], 1);
                i++;
            }
            write(1, "\n", 1);
            j++;
        }
    }
}