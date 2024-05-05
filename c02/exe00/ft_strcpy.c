
char *ft_strcpy(char *dest, char *src){
    char *osrc = dest;
   while (*src != '\0')
   {
    *dest = *src ;
    src++;
    dest++;
   }
   dest = '\0';
   return osrc;
}
