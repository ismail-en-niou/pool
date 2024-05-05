#include <stdio.h>
 void  ft_ft(int *nbr){
    *nbr = 42;
 }
int main(){
    int num = 0;
    int *p = &num;

    ft_ft(p);
    printf("%d" ,num);
    return 0;
}