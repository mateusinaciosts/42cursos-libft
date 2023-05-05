char *ft_strrchr(const char *s, int c)
{
    char *last;

    last = 0;
    while (*s != '\0')
    {
        if (*s == c)
        {
            last = (char *)s;
        }
        s++;
    }
    return (last);
}

#include <stdio.h>

int main() {
   char str[50] = "Hello, world!";
   char *ptr;

   ptr = ft_strrchr(str, 'o');
   if(ptr != NULL) {
       printf("Última ocorrência de 'l' em '%s' está em %ld\n", str, ptr-str+1);
       printf("Encontrado: %s\n", ptr);
   } else {
       printf("Caractere não encontrado na string.\n");
   }

   return 0;
}