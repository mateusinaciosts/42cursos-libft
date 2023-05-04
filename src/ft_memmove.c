/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:48:51 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/04 18:10:23 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dst = dest;
    const unsigned char *s = src;

    if (dst < s) {
        printf("entrou na primeira condicao\n");
        size_t i = 0;
        while (i < n) {
            dst[i] = s[i];
            i++;
        }
    } else {
        printf("entrou na segunda condicao\n");
        size_t i = n;
        while (i > 0) {
            dst[i - 1] = s[i - 1];
            i--;
        }
    }

    return dest;   
}

int main(void)
{
    char str1[10] = "mateus";
    char str2[4];
    char ft_str1[10] = "mateus";
    char ft_str2[4];

    memmove(str2, str1, 6);
    ft_memmove(ft_str2, ft_str1, 6);

    printf("memmove:    %s\n", str2);
    printf("ft_memmove: %s\n", ft_str2);
}