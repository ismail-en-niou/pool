int ft_str_is_alpha( char *str)
{
    while (*str != '\0')
    {
        if (65 <= *str && *str <= 90 || *str >= 97 && *str <= 122)
        {
            return 1 ;
        }else{
            return 0 ;
        }
        *str++;
    } 
}
