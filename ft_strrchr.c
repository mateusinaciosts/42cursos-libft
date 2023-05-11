/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:45:14 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/11 17:28:39 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *last;
	int i;

	last = 0;
	i = 0;
	if (s == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{
			last = (char *)s + i;
		}
		i++;
	}
	if(c == '\0')
		return ((char *)s + i);
	return (last);
}
/* 
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char s[] = "tripouille";
	char s2[] = "ltripouiel";
	char s3[] = "";

	if (ft_strrchr(s, 't') == s)
		printf("sucess 1\n");
	if (ft_strrchr(s, 'l') == s + 8)
		printf("sucess 2\n");
	if (ft_strrchr(s2, 'l') == s2 + 9)
		printf("sucess 3\n");
	if (ft_strrchr(s, 'z') == NULL)
		printf("sucess 4\n");
	if (ft_strrchr(s, 0) == s + strlen(s))
		printf("sucess 5\n");
	if (ft_strrchr(s, 't' + 256) == s)
		printf("sucess 6\n");
	char * empty = (char*)calloc(1, 1);
	if (ft_strrchr(empty, 'V') == NULL)
	{
		free(empty);
		printf("sucess 7\n");
	}
	if (ft_strrchr(s3, 0) == s3)
		printf("sucess 8\n");
} */
