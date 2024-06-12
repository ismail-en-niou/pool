#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int nb) {
    unsigned int n; 
    if (nb < 0) {
        ft_putchar('-');
        n = -nb;
    } else {
        n = nb;
    }

    if (n >= 10) {
        ft_putnbr(n / 10); 
    }
    ft_putchar(n % 10 + '0'); 
}

int main(int argc, char const *argv[]) {
    ft_putnbr(1101); 
    return 0;
}
