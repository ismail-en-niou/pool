#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    long n = nb;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar(n % 10 + '0');
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void handle_format(const char *format, va_list list, int *i)
{
    (*i)++;
    if (format[*i] == 'c')
        ft_putchar(va_arg(list, int));
    else if (format[*i] == 'd' || format[*i] == 'i')
        ft_putnbr(va_arg(list, int));
    else if (format[*i] == 's')
        ft_putstr(va_arg(list, char *));
    else if (format[*i] == '%')
        ft_putchar('%');
}

int ft_printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    int i = 0;
    int count = 0;

    while (format[i])
    {
        if (format[i] == '%')
        {
            handle_format(format, list, &i);
        }
        else
        {
            ft_putchar(format[i]);
        }
        i++;
        count++;
    }
    va_end(list);
    return count;
}

int main()
{
    int a = 2158964;
    ft_printf("Hello I'm ismail enniou  %s! The number is %d and the character is %c. Also, show a percent sign: %%%%\n CCCC", "world", a, 'A');
    return 0;
}
