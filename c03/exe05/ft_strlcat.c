#include <stdio.h>

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size) {
    unsigned int dest_len = 0 ;
    unsigned int src_len = 0 ;
    while (src[src_len] != '\0'){
        src_len++;
    }
    while (dest[dest_len] != '\0' && dest_len < size)
    {
        dest_len++;
    }
    if (dest_len == size)
    {
        return size + src_len ;
    }
    unsigned int i = 0 ;
    while (src[i] != '\0' && dest_len + i < size - 1 )
    {
        dest[dest_len+i] = src[i];
        i++;
    }
    return dest_len + src_len   ;

    
    
}

int main() {
    char dest[20] = "Hello";
    char src[] = " ismail";
    unsigned result = ft_strlcat(dest, src , sizeof(dest));
    printf("Valeur de retour de strlcat : %u\n", result);
    printf("Contenu de dest après l'appel : %s\n", dest);
    
    return 0;
}
