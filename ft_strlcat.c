/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:52:00 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/08 11:31:24 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count_dst;
	size_t	i;

	i = 0;
	count_dst = ft_strlen(dst);
	while ((src[i] != '\0') && (i < (size - 1)))
	{
		dst[count_dst + i] = src[i];
		i++;
	}
	dst[i + count_dst] = '\0';
	return (count_dst + i);
}
