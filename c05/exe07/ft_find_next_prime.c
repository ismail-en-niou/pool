#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int ft_is_prime(int n);
int ft_find_next_prime(int n);

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    if (ft_is_prime(number)){
        printf("%d is a prime number.\n", number);
        printf("%d is the next prime number.\n", ft_find_next_prime(number));
    } else {
        printf("%d is not a prime number.\n", number);
    }
    
    return 0;
}

int ft_is_prime(int nb) {
    if (nb <= 1)
        return 0;
    if (nb == 2)
        return 1;
    if (nb % 2 == 0)
        return 0;
    for (int i = 3; i <= sqrt(nb); i += 2) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}

int ft_find_next_prime(int nb) {
    nb++;
    while (!ft_is_prime(nb)) {
        nb++;
    }
    return nb;
}
