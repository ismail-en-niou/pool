int ft_recursive_factorial(int nb ){
    if (nb == 1 || nb == 0)
        return 1 ;
    else if (nb < 0)
        return 0 ;
    else
        return nb * ft_iterative_factorial(nb -1 );
}