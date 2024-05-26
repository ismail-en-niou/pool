int ft_iterative_power(int nb, int power)
{
    int res = 1;
    if (nb == 0)
        return 0;
    else if (power == 0)
        return 1;
    else if (power > 0)
    {
        int i = 0;
        while (i != power)
        {
            res = res * nb;
            i++;
        }
        return res;
    }
}
