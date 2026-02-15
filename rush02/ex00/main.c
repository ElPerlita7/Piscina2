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
char *read_line(int fd)
{
    char	*line;
    char	c;
    int	len;
	int	ret_read;

    line = malloc(1024); // tamaño máximo de línea
    if (!line)
        return NULL;

    len = 0;
	while ((ret_read = read(fd, &c, 1)) > 0)
	{
		if (c == '\n')
			break;
		line[len++] = c;
	}

	line[len] = '\0';

    // Si llegamos al final del archivo sin leer nada
    if (ret_read == 0 && len == 0)
    {
        free(line);
        return NULL;
    }

	return line;
}
int	main(int argc, char **argv)
{
	char	*dict_file;
	char	*number;
	int 	fd;
	char *line;

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
	write(1, line, ft_strlen(line)); // imprime la línea
	write(1, "\n", 1);
	free(line);
}

close(fd);
	return (0);
}


