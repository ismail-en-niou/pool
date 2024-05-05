#include <unistd.h>
void ft_putchar(char c){
    write(1,&c , 1);
}
void ft_print_reverse_alphabet(void){
    char leter ='z';
    while (leter >= 'a')
    {
       ft_putchar(leter);
       leter--;
    };   
}


int main(){
    ft_print_reverse_alphabet();
    return 0 ;

}