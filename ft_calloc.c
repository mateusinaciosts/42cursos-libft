/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:00:25 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/26 15:35:23 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if (nmemb == 0 && size == 0)
		return (ptr = malloc(total_size));
	if (nmemb != 0 && (total_size / nmemb) != size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ft_bzero(ptr, nmemb * size);
	}
	return (ptr);
}
