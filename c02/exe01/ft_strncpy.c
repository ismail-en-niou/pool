char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    char *osrc = dest;
    while (n > 0 && *src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
        n--;
    }
    dest = '\0';
    return osrc;
}
