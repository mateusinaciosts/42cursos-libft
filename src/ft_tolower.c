int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else
        return (0);
}

#include <stdio.h>

int main(void)
{
    int c = 'F';
    printf("letra: %c", ft_tolower(c));
}