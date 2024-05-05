#include <stdio.h>
int  ft_str_is_lowercase(char *str){
    while (*str != '\0')
    {
        if (!(*str <= 'z' && *str >= 'a') )
        {
            return 0 ;
        }
        str++;
    }
    return 1 ;
}
int main (){
    char str[] = "Kmi";
    printf("%d",ft_str_is_lowercase(str));
    return 0 ;
}