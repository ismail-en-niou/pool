#include <stdio.h>
void ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_rev_int_tab(int *tab, int size) {
    int j = 0;
    int i = size -1 ;
    while (i>j)
    { 
        ft_swap(&tab[j], &tab[i]);
        i--;
        j++;
    }
}

int main() {
    int size = 6;
    int tab[6] = {1, 2, 3, 4, 5, 6};
    ft_rev_int_tab(tab, size);
    printf("Tableau inversé : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
