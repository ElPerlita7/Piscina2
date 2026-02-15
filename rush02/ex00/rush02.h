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

// main.c
int	validate_number(char *str);
char	*read_line(int fd);

#endif
