#include <stdio.h>
void ft_swap(int *a , int *b){
    int temp = *a ;
    *a = *b;
    *b = temp; 
}
int main()
{
    int a = 9 , b = 8;
    int *p1 = &a ;
    int *p2 = &b ;
    ft_swap(p1,p2);
    return 0;
}
