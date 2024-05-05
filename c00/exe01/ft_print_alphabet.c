#include <unistd.h>
void ft_putchar(char c){
    write(1,&c , 1);
}
void ft_print_alphabet(void){
    char leter ='a';
    while (leter <= 'z')
    {
       ft_putchar(leter);
       leter++;
    };   
}


int main(){
    ft_print_alphabet();
    return 0 ;

}