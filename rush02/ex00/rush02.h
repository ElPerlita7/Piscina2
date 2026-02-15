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

typedef struct s_number
{
	char	num_str[21];   // buffer para convertir número a string
	char	temp[3];       // buffer temporal para invertir dígitos
	char	*value;        // valor encontrado en el diccionario
	int		hundreds;
	int		remainder;
	int		i;
	int		j;
	int		n;
}	t_number;

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

// print_numbers.c
void	print_number_basic(int num, t_dict *dict, int dict_count);
void	print_number_under_100(int num, t_dict *dict, int dict_count);
void	print_large_number(char *str, t_dict *dict, int dict_count);
void	print_scale(int scale_len, t_dict *dict, int dict_count);
void	print_block(int num, t_dict *dict, int dict_count);

#endif
