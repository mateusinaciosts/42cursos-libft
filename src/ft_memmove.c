/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:48:51 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/05 10:15:06 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dst = dest;
    const unsigned char *s = src;
    unsigned int	i;

    if (dst < s) {
        printf("### entrou na primeira condicao ###\n");
        i = 0;
        while (i < n) {
            dst[i] = s[i];
            i++;
        }
    } else {
        printf("### entrou na segunda condicao ###\n");
        i = n;
        while (i > 0) {
            dst[i - 1] = s[i - 1];
            i--;
        }
    }

    return dest;   
}

int main(void)
{
    char str1[15] = "Hello, World!";
    char str2[15];
    char ft_str1[15] = "Hello, World!";
    char ft_str2[15];

    // Copia os primeiros 6 caracteres de str1 para str2
    memmove(str2, str1, 6);
    ft_memmove(ft_str2, ft_str1, 6);
    printf("str2 depois memmove():  %s\n", str2);
    printf("str2 depois ft_memmove: %s\n", ft_str2);

    // Copia os caracteres da posição 8 em str1 para a posição 3 em str1
    memmove(&str1[3], &str1[8], 7);
    ft_memmove(&ft_str2[3], &ft_str1[8], 6);
    printf("str1 depois memmove():  %s\n", str1);
    printf("str2 depois ft_memmove: %s\n", ft_str2);

    return (0);
}