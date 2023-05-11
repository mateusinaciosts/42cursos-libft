/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:48:54 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/11 15:54:14 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	char		*src;
	char		*dst;
	size_t		i;

	src = (char *) source;
	dst = (char *) dest;
	i = 0;
	if (n == 0)
		return dest;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}