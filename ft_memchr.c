/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:54:50 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/11 15:54:55 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    unsigned char value = c;
    size_t i;

    i = 0;
    while(i < n)
    {
        if(ptr[i] == value)
            return ((void *) ptr + i);
        i++;
    }
    return (0);
}