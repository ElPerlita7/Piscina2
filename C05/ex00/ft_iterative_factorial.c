int ft_iterative_factorial(int nb)
{
    int result;

    if (nb < 0)
        return (0);
    result = 1;

    while (nb > 1)
    {
        result = result * nb;
        nb = nb -1;
    }
    return (result);
}
// #include <stdio.h>

// int main(void)
// {
//     printf("5! = %d\n", ft_iterative_factorial(5));
//     printf("0! = %d\n", ft_iterative_factorial(0));
//     printf("9! = %d\n", ft_iterative_factorial(9));
//     printf("3! = %d\n", ft_iterative_factorial(3));
//     printf("-4! = %d\n", ft_iterative_factorial(-4));
//     return (0);
// }