#include <unistd.h>

// void	ft_putnbr(int nb)
//  {
// 	char num;

//     if (nb <= 9)
// 	{
// 		num = nb + '0';
// 		write(1, &num, 1);
// 	}
// 	else
// 	{
// 		ft_putnbr(nb / 10);
// 		num = nb % 10 + '0';
// 		write(1, &num, 1);
// 	}
//  }

#include <stdlib.h>
int *ft_range(int min, int max)
{
    int *tab;

    int i;

    i = 0;
    if (min >= max)
        return (NULL);
    tab = malloc((max - min) * sizeof(int));
    if (!tab)
        return (NULL);
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    return (tab);
}
// #include <stdio.h>
// int main(void)
// {
//     int min = 2;
//     int max = 6;
//     int *tab;
//     int i = 0;

//     tab = ft_range(min, max);
//     if (tab)
//     {
//         while (i < (max - min))
//         {
//             printf("%d\n", tab[i]);
//             i++;
//         }
//         free (tab);
//     }
//     else
//     {
//         printf("Error: no se pudo asignar memoria.\n");
//     }
//     return (0);
// }