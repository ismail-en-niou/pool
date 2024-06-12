#include <stdio.h>

void ft_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void ft_sort_int_tab(int *tab, int size) {
    int i = 0;
    while (i < size - 1) {
        int j = i + 1;
        while (j < size) {
            if (tab[i] > tab[j]) {
                ft_swap(&tab[i], &tab[j]);
            }
            j++;
        }
        i++;
    }
}
int main() {
    int size = 6;
    int tab[6] = {1, 6, 3, 4, 2, 5};
    ft_sort_int_tab(tab, size);
    printf("Tableau trié : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
