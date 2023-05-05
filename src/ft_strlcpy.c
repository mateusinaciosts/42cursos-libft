#include <stdio.h>

size_t ft_strlcpy(char *dst, char *src, size_t size)
{
    size_t i = 0;
    while (i < size - 1 && src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (i);
}

int main() {
    char dest[10];
    char *src = "mateusinacio";
    size_t copied = ft_strlcpy(dest, src, 7);
    printf("ft_strlcpy Copied %zu characters: %s\n", copied, dest);
    return 0;
}