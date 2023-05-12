/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:38:47 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/12 09:45:09 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (!*s1 && !*s2)
        return (0);
    if (n == 0)
        return (0);
    while ((s1[i] && s2[i]) && (i < n - 1) )
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
    
}

/* 
int main(void)
{
	if (ft_strncmp("", "1", 1) < 0)
		printf("sucess 14\n");
	if (ft_strncmp("1", "", 1) > 0)
		printf("sucess 15\n");
} */