void ft_bzero(void *s, size_t n)
{
    int i;
    char *ptr = s;
    i = 0;
    while(i < n)
    {
        ptr[i] = 0;
        i++;
    }
    printf("%n", ptr);
}

#include <string.h>

int main() {
    char buffer[10];
    
    // preenche o buffer com zeros
    bzero(buffer, sizeof(buffer));
    
    return 0;
}