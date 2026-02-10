int ft_fibonacci(int index)
{
	if(index < 0)
		return (-1);
	if(index == 0)
		return (0);
	if(index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)); 
}
// #include <stdio.h>
// int main ()
// {
// 	printf("%d\n", ft_fibonacci(2));
// 	printf("%d\n", ft_fibonacci(20));
// 	printf("%d\n", ft_fibonacci(10));
// 	printf("%d\n", ft_fibonacci(9));
// 	printf("%d\n", ft_fibonacci(7));
// 	printf("%d\n", ft_fibonacci(0));
// }