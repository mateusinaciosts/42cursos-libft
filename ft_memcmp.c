/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:20:05 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/11 15:54:41 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 
 int ft_memcmp(const void *s1, const void *s2, size_t n)
 {
    const unsigned char *str1 =  s1;
    const unsigned char *str2 =  s2;
    size_t i;

    i = 0;
    while(i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
 }