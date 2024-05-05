char *ft_strupcase(char *str)
{
    while (*str != '\0')
    {
        if (*str <= 'z' && *str >= 'a')
        {
            *str = *str - 32;
        }
        str++;
    }
}

