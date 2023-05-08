
#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    char *ptr = (char *)s;
    char value = (char) c;
    size_t i;

    i = 0;
    while(ptr[i] != '\0' && i < n -1)
    {
        if(ptr[i] == value)
            return ((void *) ptr + i);
        i++;
    }
    return (0);
}


int main() {
    const char str[] = "Hello, World!";
    const char *result = ft_memchr(str, 'o', strlen(str));
    if (result != NULL) {
        printf("O caractere 'o' foi encontrado na posicao %ld.\n", result - str);
    } else {
        printf("O caractere 'o' nao foi encontrado na string.\n");
    }
    return 0;
}