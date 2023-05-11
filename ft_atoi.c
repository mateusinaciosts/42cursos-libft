/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:55:17 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/10 09:59:22 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int n = 0;
    int sign = 1;
    int i = 0;

    while (nptr[i] == ' ')
    {
        i++;
    }
    if (nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (nptr[i] == '+')
    {
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        n = n * 10 + (nptr[i] - '0');
        i++;
    }
    return sign * n;
}

