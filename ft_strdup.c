/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:40:28 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/10 18:32:32 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strdup(const char *s)
{
    int size;
    int i;
    char *s2;

    size = 0;
    i = 0;
    while (s[size] != '\0')
        size++;
    s2 = malloc(sizeof(char) * size);
    while (i <= size)
    {
        s2[i] = s[i];
        i++;
    }
    return (s2);
}