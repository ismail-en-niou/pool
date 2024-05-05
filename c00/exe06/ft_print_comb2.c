#include <unistd.h>
void ft_putchar(char c){
    write(1,&c , 1);
}
void  ft_print_comb2(void){
    int i , j , k ,l ;
    for ( i = 0; i <= 9; i++)
    {
        for ( j = 0; j < 9; j++)
        {
            for ( k = 0; k <= 9; k++)
            {
               for ( l = 0; l <= 9; l++)
               {
                    ft_putchar(i + '0');
                    ft_putchar(j + '0');
                    ft_putchar(' ');
                    ft_putchar(k + '0');
                    ft_putchar(l + '0');
                    ft_putchar(',');
                    ft_putchar(' ');
               }  
            }  
        }  
    }   
}

int main(){
    ft_print_comb2();
    return 0 ;

}