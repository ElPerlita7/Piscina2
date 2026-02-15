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
	int		fd;
	char	*line;
	t_dict	dict[1000];
	int		read_count;

	read_count = 0;
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
	while ((line = read_line(fd)))
	{
		if (read_count < 1000)
			dict[read_count++] = parse_line(line);
		free(line);
	}
	close(fd);
	if (number[0] == '0' && number[1] == '\0')
		print_number_basic(0, dict, read_count);
	else
		print_large_number(number, dict, read_count);
	write(1, "\n", 1);
	return (0);
}



