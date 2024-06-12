#include <unistd.h>
void ft_putchar(char c) {
    write(1, &c, 1); 
}
void ft_putnbr(int nb) {
    if (nb < 0) {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }

    ft_putchar(nb % 10 + '0');
}
int main() {
    int number = -42;
    ft_putnbr(number);
    return 0;
}
