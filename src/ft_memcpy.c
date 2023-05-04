/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:48:54 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/04 14:48:55 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *source, size_t n)
{
    char *src = (char *) source;
    char *dst = (char *) dest;
    int i;

    i = 0;
    while(i < n)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

int main(void)
{
    char source[13] = "mateus inacio";
    char dest[13];
    memcpy(dest, source, 6);
    printf("memcpy:    %s\n", dest);
    char ft_source[13] = "mateus inacio";
    char ft_dest[13];
    ft_memcpy(ft_dest, ft_source, 6);
    printf("ft_memcpy: %s\n", ft_dest);
}