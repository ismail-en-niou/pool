#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb){
    char *ptr = dest;
    int i = 0 ;
     while (*ptr != '\0')
    {
        ptr++ ;
    }
    while (*src !='\0' && i != nb)
    {
        *ptr++ = *src++ ;
        i++;
    }
    *ptr ='\0';
    return dest ;
}
int main() {
    char dest[50] = "Hello, ";
     char src[] = "world!";
    ft_strncat(dest, src , 2);
    printf("Concatenated string: %s\n", dest); 
    return 0;
}