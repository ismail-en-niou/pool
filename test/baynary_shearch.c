#include <stdio.h>
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; 
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("L'élément %d n'est pas présent dans le tableau.\n", x);
    else
        printf("L'élément %d est présent à l'index %d.\n", x, result);
    
    return 0;
}


/*






nums = [4, 5, 5, 4, 4, 6, 7, 7, 7, 6]
numsSize = 10
output = 5
[4, 5, 5, 4, 4]




nums = [1, 2, 3, 2, 2, 1, 3, 1]
numsSize = 8
output = 5
[2, 3, 2, 2, 1]


nums = [1, 2, 3, 4, 4, 3, 2, 1]
numsSize = 8
output = 2




*/