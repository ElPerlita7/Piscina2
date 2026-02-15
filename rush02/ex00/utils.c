#include "rush02.h"

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strndup(char *src, int n)
{
	char	*dup;
	int	i;

	if (!src || n <= 0)
		return NULL;

	dup = malloc(n + 1);
	if (!dup)
		return NULL;

	i = 0;
	while (i < n && src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
char	*ft_strdup(char *src)
{
	char *dup;
	int i;

	i = 0;
	dup = malloc(ft_strlen(src) + 1);
	if (!dup)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
void	init_scales(t_number *struct_init)
{
	struct_init->scales[0]  = "";
	struct_init->scales[1]  = "thousand";
	struct_init->scales[2]  = "million";
	struct_init->scales[3]  = "billion";
	struct_init->scales[4]  = "trillion";
	struct_init->scales[5]  = "quadrillion";
	struct_init->scales[6]  = "quintillion";
	struct_init->scales[7]  = "sextillion";
	struct_init->scales[8]  = "septillion";
	struct_init->scales[9]  = "octillion";
	struct_init->scales[10] = "nonillion";
	struct_init->scales[11] = "undecillion";
}
