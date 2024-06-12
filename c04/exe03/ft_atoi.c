#include <unistd.h>
#include <stdio.h>
int ft_isspace(char c)
{
    if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ') // test all spaces 
        return (1);
    return (0);
}

int  convert(char *str, int i)
{
    int res;
    res = 0 ;
    while (str[i] <= '9' && str[i] >= '0')
    {
        res = res * 10;
        res = res + str[i] - '0'; // 0 in asci table equal a 48  
        i++;
    }
    return (res);
}
int ft_atoi(char *str)
{
    int i , min , signe, res;
    i = min = res = 0 ;
    signe = 1 ;
    while(ft_isspace(str[i]))
        i++;
    while (str[i] == '+' || str[i] == '-' )
    {
        if (str[i] == '-')
            min++;
        i++;
    }
    if(min % 2){
        signe = -1 ;
    }
    res = convert(str , i);
    return (res * signe);
}
int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    printf("Testing ft_atoi:\n");
    for (int i = 1; i < argc; i++) {
        printf("String: \"%s\", Result: %d\n", argv[i], ft_atoi(argv[i]));
    }

    return 0;
}