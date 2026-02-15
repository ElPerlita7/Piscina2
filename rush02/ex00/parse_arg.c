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
int get_args(int argc, char **argv, char **file, char **number)
{
	if (argc == 2)
	{
		*file = "numbers.dict";
		*number = argv[1];
		return (1);
	}
	if (argc == 3)
	{
		*file = argv[1];
		*number = argv[2];
		return (1);
	}
	return (0);
}
int read_dict_file(char *file, t_dict *dict, int *count)
{
	int		fd;
	char	*line;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (0);
	while ((line = read_line(fd)))
	{
		if (*count < 1000)
			dict[(*count)++] = parse_line(line);
		free(line);
	}
	close(fd);
	return (1);
}
void free_dict(t_dict *dict, int count)
{
	int i = 0;
	while (i < count)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
}

