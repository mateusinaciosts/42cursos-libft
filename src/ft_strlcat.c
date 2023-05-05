

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t ft_strlcat (char *dst, const char *src, size_t size)
{
    int count_dst;
    int i;

    i = 0;
    count_dst = ft_strlen(dst);
    while((src[i] != '\0') && (i < (size - 1)))
    {
        dst[count_dst + i] = src[i];
        i++;
    }
    dst[i + count_dst] = '\0';
    return (count_dst + i);
}



int main() {
   char destino[20] = "Hello, ";
   char origem[] = "world!";
   
   size_t tamanho = ft_strlcat(destino, origem, sizeof(destino));

   printf("A string concatenada é: %s\n", destino);
   printf("O comprimento da string concatenada é: %zu\n", tamanho);
   return 0;
}

