int ft_str_is_uppercase( char *str){
   while (*str != '\0')
    {
        if ( !(*str <= 'Z' && *str >= 'A'))
        {
            return 0;
        }
        str++;
    }
    return 1;
    
}
