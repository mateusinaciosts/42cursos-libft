/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:49:45 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/16 09:59:37 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*src == '\0')
		return ((char *)dest);
	while (dest[i] != '\0' && i < n)
	{
		while (src[j] != '\0' && i + j < n && dest[i + j] == src[j])
		{
			j++;
		}
		if (src[j] == '\0')
			return ((char *)&dest[i]);
		i++;
	}
	return (0);
}
