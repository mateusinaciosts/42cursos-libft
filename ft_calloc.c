/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:00:25 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/12 19:17:11 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

void *ft_calloc(size_t nmemb, size_t size)
{
     char *ptr;
     size_t i;
    
     ptr = malloc(nmemb * size);
     i = 0;
     if (ptr == NULL )
        return (NULL);
     if(ptr[i])
     {  
        while(i < (nmemb * size))
        {
            ptr[i] = 0;
            i++;
        }
     }
     return (ptr);
}

int main(void)
{
    void * p = ft_calloc(2, 2);
	char e[] = {0, 0, 0, 0};
    
    if (!memcmp(p, e, 4))
        printf("success 1\n");
    else
        printf("failure 1");
    if (ft_calloc(SIZE_MAX, SIZE_MAX) == NULL)
        printf("sucess 3");
    else
        printf("failure 3");
   
}