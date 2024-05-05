#include <unistd.h>
void ft_putchar(char c){
    write(1,&c , 1);
}
void ft_putstr_non_printable(char *str){
    while (*str != '\0')
    {
        if (*str >=32 && *str <=126)
        {
           ft_putchar(*str);
        } else{
            ft_putchar('\\');
            ft_putchar("0123456789abcdef"[*str/16]);
            ft_putchar("0123456789abcdef"[*str%16]);
        }
        str++;
    }
}
int main()
{
    char str[]="Coucou\ttu vas bien ?";
    ft_putstr_non_printable(str);
    return 0;
}
