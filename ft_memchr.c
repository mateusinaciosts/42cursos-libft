
#include "libft.h"

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
