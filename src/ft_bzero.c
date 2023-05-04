/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:13:13 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/04 12:14:33 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    int i;
    char *ptr = (char *) s;
    i = 0;
    while(i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

#include <string.h>

int main(void) {
	char	str_bzero_0[50] = "mateus";
	char	str_ft_bzero_0[50] = "mateus";
	bzero(str_bzero_0, 5);
	ft_bzero(str_ft_bzero_0, 5);
    printf("bzero(): %s\n", str_bzero_0);
	printf("ft_bzero(): %s\n", str_ft_bzero_0);

}