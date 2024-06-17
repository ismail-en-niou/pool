#include <unistd.h>

int main(int argc, char const *argv[])
{
    if (argc != 2) {
        write(1, "\n", 1);
        return 0;
    }

    int i = 0;
    while (argv[1][i] != '\0')
    {
        char str=argv[1][i];
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z') {
            str = (argv[1][i] - 'a' + 13) % 26 + 'a';
        }
         if (argv[1][i] >= 'A' && argv[1][i] <= 'Z') {
            str = (argv[1][i] - 'A' + 13) % 26 + 'A';
        }
        write(1, &str, 1);
        i++;
    }

    write(1, "\n", 1);
    return 0;
}
