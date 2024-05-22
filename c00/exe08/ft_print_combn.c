#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int *num, int n)
{
	int i;

	for (i = 0; i < n; i++)
		ft_putchar(num[i] + '0');
}

void	ft_print_combn(int n)
{
	int	num[10];
	int	i;

	if (n <= 0 || n > 10) // first condition to check the n is betwen 0 and 10
		return;

	for (i = 0; i < n; i++) // hna kn3mer hade array be 0 ... 10
		num[i] = i; 

	while (1) // infiniti loop katkherje mnha gha be break 
	{
		ft_print_number(num, n);
		if (num[0] == 10 - n)
			break ;
		ft_putchar(',');

		ft_putchar(' ');

		i = n - 1;
		while (i >= 0 && num[i] == 10 - n + i) // ghlibane katkhedm gha fe chek final 
			i--;
		num[i]++;
		while (++i < n)//faxe kat9lbe akhire be li 9blo + 1 
			num[i] = num[i - 1] + 1;// num[2] = num[1] +1 
	}
}

int main()
{
        ft_print_combn(10);
        ft_putchar('\n');
    
    return 0;
}
