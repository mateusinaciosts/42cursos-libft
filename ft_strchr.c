/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:51:22 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/11 17:38:31 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *) s + i);
		s++;
	}
	if (c == '\0')
		return ((char *) s + i);
	return (0);
}

/* #include <string.h>
#include <stdio.h> 
int main(void)
{
	char s[] = "tripouille";
	
	if(ft_strchr(s, 't') == s)
		printf("sucess 1\n");
	if(ft_strchr(s, 'l') == s + 7)
		printf("sucess 2\n");
	if(ft_strchr(s, 'z') == 0)
		printf("sucess 3\n");
	if(ft_strchr(s, 0) == s + strlen(s))
		printf("sucess 4\n");
	if(ft_strchr(s, 't' + 256) == s)
		printf("sucess 5\n");
} */
