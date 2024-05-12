#include <stdio.h>
#include <string.h>

int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    int total_length = sizeof(dest); // Size of destination buffer
    int result = strlcat(dest, src, total_length);

    printf("Resulting string: %s\n", dest);
    printf("Total length of the string: %d\n", result);

    return 0;
}
