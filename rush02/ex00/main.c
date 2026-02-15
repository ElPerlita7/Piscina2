#include "rush02.h"

int	validate_number(char *str)
{
	int	i;

	if (!str || str[0] == '\0')
		return (0);
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
int	main(int argc, char **argv)
{
	char	*dict_file;
	char	*number;
	int 	fd;
	char	*line;
	t_dict	dict[1000];
	int	read_count = 0;
	char	*value;

	if (argc == 2)
	{
		dict_file = "numbers.dict";
		number = argv[1];
	}
	else if (argc == 3)
	{
		dict_file = argv[1];
		number = argv[2];
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}

	if (!validate_number(number))
	{
		write(1, "Error\n", 6);
		return (1);
	}

fd = open(dict_file, O_RDONLY);
if (fd < 0)
{
    write(1, "Dict Error\n", 11);
    return (1);
}

// leer y mostrar cada línea
	while ((line = read_line(fd)))
	{
		if (read_count < 1000)
			dict[read_count++] = parse_line(line);
		free(line);
	}

	close(fd);

	value = find_value(number, dict, read_count);

	if (value)
	{
		write(1, value, ft_strlen(value));
		write(1, "\n", 1);
	}
	else
	{
		write(1, "Number not found in dictionary\n", 31);
	}

	return (0);
}


