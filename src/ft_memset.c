/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 09:00:06 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/04 11:25:30 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	int	i;
	char    *valueptr;

	i = 0;
	valueptr = (char *) ptr;
	while (i < n)
	{
		valueptr[i] = value;
		i++;
	}
	return (valueptr);
}

int main(void)
{
    char str_metset_0[50] = "Hello, world!";
	char str_ft_metset_0[50] = "Hello, world!";
    memset(str_metset_0, '*', 2);
	ft_memset(str_ft_metset_0, '*', 2);
    printf("memset():    %s\n", str_metset_0);
	printf("ft_memset(): %s\n", str_ft_metset_0);
}