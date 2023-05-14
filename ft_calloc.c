/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:00:25 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/14 16:15:20 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
     void *ptr;
     size_t n_max;
    
     n_max = 18446744073709551615UL;
     if ((nmemb == 0 && size == 0) || (nmemb == n_max && size == n_max))
		return (NULL);
     ptr = (void *) malloc(nmemb * size);
	 if (ptr == NULL)
	 	return (NULL);
     ft_bzero(ptr, (nmemb * size));
     return (ptr);
}