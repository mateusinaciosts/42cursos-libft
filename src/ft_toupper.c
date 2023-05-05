
int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z') 
        return (c - 32);
    else
        return (0);
}

#include <stdio.h>

int main(void)
{
    int c = 't';
    printf("letra: %c", ft_toupper(c));
}