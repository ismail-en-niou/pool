#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int c1 = 0, c2 = 0;
    while (c1 < n && c2 < n)
    {
        if (*s1 != *s2)
        {
            return (*s1 > *s2) ? 1 : -1;
        }
        s1++;
        s2++;
        c1++;
        c2++;
    }
    if (c1 == n && c2 == n)
    {
        return 0;
    }
    else if (c1 == n)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    char str1[] = "hello";
    char str2[] = "hello";
    printf("%d", ft_strncmp(str1, str2, 5));
    return 0;
}
