
#include <unistd.h>

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex = "0123456789abcdef";

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
		write(1, str, 1);
		}
		else
		{
			char c = *str;
			write(1, "\\", 1);
			write(1, &hex[c / 16], 1);
			write(1, &hex[c % 16], 1);
		}
		str++;
	}
}

int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}

