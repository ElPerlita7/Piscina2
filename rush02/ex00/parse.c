#include "rush02.h"

t_dict	parse_line(char *line)
{
	t_dict	num;
	int	i;
	int	start;

	i = 0;
	num.key = NULL;
	num.value = NULL;

	while (line[i] == ' ')
		i++;

	start = i;

	while (line[i] && line[i] != ':')
		i++;

	num.key = ft_strndup(line + start, i - start);

	if (line[i] == ':')
		i++;

	while (line[i] == ' ')
		i++;
	num.value = ft_strdup(line + i);
	return (num);
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
		return (NULL);
	}
	return (line);
}
char	*find_value(char *key, t_dict *dict, int read_count)
{
	int	i;

	i = 0;
	while (i < read_count)
	{
		if (ft_strcmp(dict[i].key, key) == 0)
		{
			return (dict[i].value);
		}
		i++;
	}
	return (NULL);
}

