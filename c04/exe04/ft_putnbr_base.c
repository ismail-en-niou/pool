#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_strlen(char *src)
{
    int i;
    while (src[i] != '\0')
    {
        i++;
    }
    return i;
}
void ft_putstr(char *str)
{
    while (*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}
void ft_putnbr(int nb)
{
    unsigned int n;
    if (nb < 0)
    {
        ft_putchar('-');
        n = -nb;
    }
    else
    {
        n = nb;
    }

    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}
int ft_check(char *base)
{
    if (ft_strlen(base) == 2 ||ft_strlen(base) == 8 || ft_strlen(base) == 10 ||ft_strlen(base) == 16)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void ft_putnbr_base(int nbr, char *base)
{
    char result[100];
    int nb = nbr;
    if (ft_check(base) == 1)
    {
        if (nb < 0)
        {
            ft_putchar('-');
            nb = nb * -1;
        }
    }
    int i;
    while(nb > 0 ){
        int clc ;
        clc  = nb % ft_strlen(base);
        result[i] = clc;
        nb = nb / ft_strlen(base);
        i++;
    }
    result[i] = '\0';
    while (i != 0)
    {
        ft_putnbr(result[--i]);
    }
}
int main(){
    ft_putnbr_base(15,"su");
    return 0;
}