#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int cp = 0;
    while (cp < size - 1 && src[cp] != '\0') {
        dest[cp] = src[cp];
        cp++;
    }
    dest[cp] = '\0';
    return cp; 
}

int main(int argc, char const *argv[])
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char dest[50];
    printf("Avant la fonction :\n %s \n\n", str);
   ft_strlcpy(dest, str, 6);
    printf("Après la fonction :\n \n \n\n %s\n \n \n \n", dest);
    return 0;
}
