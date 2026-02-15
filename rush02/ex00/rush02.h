#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
#include <string.h>


typedef struct s_dict
{
	char	*key;
	char	*value;
}	t_dict;


// utils.c
int	ft_strlen(char *str);
char	*ft_strdup(char *src);
char	*ft_strndup(char *src, int n);
int	ft_strcmp(char *s1, char *s2);

// main.c
int	validate_number(char *str);

// parse.c
t_dict	parse_line(char *line);
char	*find_value(char *key, t_dict *dict, int read_count);
char	*read_line(int fd);

#endif
