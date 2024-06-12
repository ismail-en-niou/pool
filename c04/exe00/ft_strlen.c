#include <stdio.h>
int ft_strlen(char *src){
    int i ;
    while (src[i] != '\0')
        i++;
    return i ;   
}
int main(int argc, char const *argv[])
{
    char src[] = "slm";
    printf("la taille est :%d ", ft_strlen(src));
    return 0;
}


