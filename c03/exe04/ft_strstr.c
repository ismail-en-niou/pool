#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find) {
    char *ptr_str = str;
    char *ptr_to_find;
    
    if (*str == '\0')
        return NULL;
    
    if (*to_find == '\0')
        return str;
    
    while (*ptr_str != '\0') {
        ptr_to_find = to_find ;
        if (*ptr_to_find == *ptr_str)
        {
            char *start = ptr_str ;
            while (*ptr_to_find !='\0' && *ptr_to_find == *ptr_str )
            {
                ptr_str++;
                ptr_to_find++ ; 
            }
            if (*ptr_to_find == '\0')
            {
                return start ;
            }
            ptr_str = start + 1 ;
            
        }else{
            ptr_str++;
        }
    }
    return NULL;
}

int main() {
    char str[] = "This is a test string";
    char to_find[] = "test";
    char *result = ft_strstr(str, to_find);   
    if (result != NULL)
        printf("Substring found at index: %ld\n", result - str);
    else
        printf("Substring not found\n");
    
    return 0;
}
