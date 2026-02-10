int ft_strlen(char *strs)
{
    int i = 0;
    while (strs[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    if (size == 0)
}