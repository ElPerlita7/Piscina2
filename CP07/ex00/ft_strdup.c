#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char *ft_strdup(char *src)
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
// #include <stdio.h>

// int main(void)
// {
//     char *str = "Hola mundo";
//     char *dup;

//     dup = ft_strdup(str);
//     if (!dup)
//     {
//         printf("Error al duplicar la cadena\n");
//         return (1);
//     }

//     printf("Original: %s\n", str);
//     printf("Duplicada: %s\n", dup);

//     free(dup);
//     return (0);
// }