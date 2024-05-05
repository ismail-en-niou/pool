#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
        {
            return (*s1 > *s2) ? 1 : -1;
        }
        s1++;
        s2++;
        if (*s1 == '\0' && *s2 == '\0')
        {
            return 0;
        }
        else if (*s1 == '\0')
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }
}
int main(int argc, char const *argv[])
{
    char str1[] = "hello";
    char str2[] = "hello";
    printf("%d", ft_strcmp(str1, str2));
    return 0;
}
