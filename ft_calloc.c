/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:00:25 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/10 17:42:22 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
     char *ptr;
     size_t i;

     ptr = malloc(nmemb * size);
     i = 0;
     if(ptr != 0)
     {  
        while(i < (nmemb * size))
        {
            ptr[i] = 0;
            i++;
        }
     }
     return (ptr);
     
     
}
 