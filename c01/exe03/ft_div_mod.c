#include <stdio.h>
void ft_div_mod(int a , int b , int *div , int *mod){
    *div = a / b ;
    *mod = a % b ;
}
int main (){
    int a = 10 ,b = 3 ;
    int mod , div ;
    ft_div_mod(a,b,&div , &mod);
    printf("%d , %d"  , div , mod );
}
