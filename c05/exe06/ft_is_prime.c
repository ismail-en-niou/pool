int ft_is_prime(int nb){
    if ( nb == 0 || nb == 1)
        return 0 ;
    for (int  i = 0; i < nb / 2; i++)
    {
        if (nb % 2 == 0) 
            return 0;
    }
    return 1 ; 
}
