#include "rush02.h"

int	main(int argc, char **argv)
{
	char	*dict_file;
	char	*number;
	t_dict	dict[1000];
	int		dict_count;

	dict_count = 0;
	if (!get_args(argc, argv, &dict_file, &number))
		return (write(1, "Error\n", 6), 1);
	if (!validate_number(number))
		return (write(1, "Error\n", 6), 1);
	if (!read_dict_file(dict_file, dict, &dict_count))
		return (write(1, "Dict Error\n", 11), 1);
	if (number[0] == '0' && number[1] == '\0')
		print_number_basic(0, dict, dict_count);
	else
		print_large_number(number, dict, dict_count);
	write(1, "\n", 1);
	free_dict(dict, dict_count);
	return (0);
}



