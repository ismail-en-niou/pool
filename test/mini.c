#include <unistd.h>


void search_and_replace(char *str, char l1 , char l2) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == l1) {
            str[i] = l2;
        }
        write(1, str[i], 1);
        i++;
    }
}

int main(int argc, char const *argv[]) {
    if (argc != 3 || argv[1][1] != '\0' || argv[2][1] != '\0' || argv[3][1] != '\0') {
        write(1, "\n", 1);
        return 1;
    }

    search_and_replace((char *)argv[1], argv[2][0], argv[3][0]);
    write(1, "\n", 1);  // Add newline after output
    return 0;
}
