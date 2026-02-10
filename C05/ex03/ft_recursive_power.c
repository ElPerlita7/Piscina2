int ft_recursive_power(int nb, int power)
{
	int result;

	if(power < 0)
		return (0);
	if (power == 0)
		return (1);
		result = 1;
		return (nb * ft_recursive_power(nb, power - 1));
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_recursive_power(5, 3));
// 	printf("%d\n", ft_recursive_power(10, 10));
// 	printf("%d\n", ft_recursive_power(3, 10));
// 	printf("%d\n", ft_recursive_power(0, 9));
// 	printf("%d\n", ft_recursive_power(-100, 2));
// 	printf("%d\n", ft_recursive_power(20, 3));
// }