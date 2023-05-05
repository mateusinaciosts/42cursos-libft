char *ft_strchr(const char *s, int c)
{
    while(*s != '\0')
    {
        if(*s == c)
        {
            return (char*) s;
        }
        s++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[] = "Hello, world!";
    char *ptr = ft_strchr(str, 'o');
    if (ptr != NULL) {
        printf("Encontrado: %s\n", ptr);
    } else {
        printf("Não encontrado. %s\n", ptr);
    }
    return 0;
}