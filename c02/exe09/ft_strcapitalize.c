#include <stdio.h>

char *ft_strcapitalize(char *str) {
    if (*str >= 'a' && *str <= 'z') {
        *str -= 32; 
    }
    while (*str != '\0' ) {
        if (*str == ' ' || !(*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')) {
            if (*(str + 1) >= 'a' && *(str + 1) <= 'z') {
                *(str + 1) -= 32;
            }
        }
        str++;
    }
    return str;
}

int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("Avant la fonction :\n %s \n\n", str);
    ft_strcapitalize(str);
    printf("\nAprès la fonction :\n %s\n", str);
    return 0;
}
