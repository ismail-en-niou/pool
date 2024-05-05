int  ft_putstr(char *str){
    int nb = 0;
     while (*str != '\0')
     {
        *str++;
        nb++;
     }
      return nb ;
}
