#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    int i, j, k;
    for (i = 0; i <= 7; i++)
    {
        for (j = i + 1; j <= 8; j++)
        {
            for (k = j + 1; k <= 9; k++)
            {
                ft_putchar(i + '0');
                ft_putchar(j + '0');
                ft_putchar(k + '0');
                if (i != 7 || j != 8 || k != 9)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
        }
    }
}
int main()
{
    ft_print_comb();
    return 0;
}
