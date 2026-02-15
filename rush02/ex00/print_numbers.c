#include "rush02.h"

// imprime numeros del 0 -20
void	print_number_basic(int num, t_dict *dict, int dict_count)
{
	t_number	nb;

	nb.i = 0;
	nb.j = 0;
	nb.n = num;
	nb.value = NULL;
	nb.num_str[0] = '\0';
	nb.temp[0] = '\0';
	if (nb.n == 0)
		nb.num_str[nb.i++] = '0';
	while (nb.n > 0)
	{
		nb.temp[nb.j] = (nb.n % 10) + '0';
		nb.n = nb.n / 10;
		nb.j++;
	}
	while (nb.j > 0)
		nb.num_str[nb.i++] = nb.temp[--nb.j];
	nb.num_str[nb.i] = '\0';
	nb.value = find_value(nb.num_str, dict, dict_count);
	if (nb.value)
		write(1, nb.value, ft_strlen(nb.value));
}

// imprime numeros por debajo del 100
void	print_number_under_100(int num, t_dict *dict, int dict_count)
{
	int	tens;
	int	units;

	tens = 0;
	units = 0;

	if (num <= 20 || num % 10 == 0)
	{
		print_number_basic(num, dict, dict_count);
	}
	else
	{
		tens = (num / 10) * 10;
		units = num % 10;
		print_number_basic(tens, dict, dict_count);
		write(1, " ", 1);
		print_number_basic(units, dict, dict_count);
	}
}
void	print_block(int num, t_dict *dict, int dict_count)
{
	t_number	nbr;

	nbr.hundreds = num / 100;
	nbr.remainder = num % 100;
	if (nbr.hundreds > 0)
	{
		print_number_basic(nbr.hundreds, dict, dict_count);
		write (1, " ", 1);
		print_number_basic(100, dict, dict_count);
		write (1, " ", 1);
	}
	if (nbr.remainder > 0)
	{
		print_number_under_100(nbr.remainder, dict, dict_count);
		write (1, " ", 1);
	}
}
void	print_scale(int scale_len, t_dict *dict, int dict_count)
{
	t_number	nbr;
	char	scale[21];

	nbr.j = 1;
	scale[0] = '1';
	while (nbr.j <= scale_len * 3)
		scale[nbr.j++] = '0';
	scale[nbr.j] = '\0';
	nbr.value = find_value(scale, dict, dict_count);
	if (nbr.value)
	{
		write (1, nbr.value, ft_strlen(nbr.value));
		write (1, " ", 1);
	}
}
void	print_large_number(char *str, t_dict *dict, int dict_count)
{
	t_number	nbr;
	int	len;
	int	scale_len;

	len = ft_strlen(str);
	scale_len = (len - 1) / 3;
	nbr.i = 0;
	while (scale_len >= 0)
	{
		nbr.n = 0;
		if (scale_len == (len - 1) / 3)
			while (nbr.i < len % 3)
				nbr.n = nbr.n * 10 + (str[nbr.i++] - '0');
		while (nbr.i < len - scale_len * 3)
			nbr.n = nbr.n * 10 + (str[nbr.i++] - '0');
		if (nbr.n > 0)
		{
			print_block(nbr.n, dict, dict_count);
			if (scale_len > 0)
				print_scale(scale_len, dict, dict_count);
		}
		scale_len--;
	}
}


