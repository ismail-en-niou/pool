<<<<<<< HEAD
unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int dest_len = 0;

    // Calculate the length of the destination string
    while (dest[dest_len] != '\0' && dest_len < size) {
        dest_len++;
    }
   
    // Calculate the length of the source string
    unsigned int src_len = 0;
    while (src[src_len] != '\0') {
        src_len++;
    }

    unsigned int total_len = dest_len + src_len;

    // Copy characters from src to dest, taking care not to overflow the buffer
    unsigned int i = 0;
    while (src[i] != '\0' && dest_len + i < size - 1) {
        dest[dest_len + i] = src[i];
        i++;
    }

    printf("%d \n",i);
    if (dest_len < size) {
        dest[dest_len + i] = '\0';
    }

    return total_len;
}

int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int result = ft_strlcat(dest, src, sizeof(dest));

    printf("Resulting string: %s\n", dest);
    printf("Total length of the string: %u\n", result);

    return 0;
}
=======
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
    
}
>>>>>>> 255ea45543ed4cc672ad53d54228e893fb1da8c9
