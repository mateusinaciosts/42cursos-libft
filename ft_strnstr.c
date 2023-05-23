/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:49:45 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/23 16:59:05 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strnstr(const char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

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

void ft_print_result(char const *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main()
{
	const char *str;
	if (ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15) == "lorem ipsum dolor sit amet")
		printf("SUCESSO 01\n");
	else
		ft_print_result(str);

	if (ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15) == "ipsum dolor sit amet")
		printf("SUCESSO 02\n");
	else
		ft_print_result(str);

	if (ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35) == "ipsum dolor sit lorem ipsum dolor")
		printf("SUCESSO 03\n");
	else
		ft_print_result(str);

	if (ft_strnstr("lorem ipsum dolor sit amet", "", 10) == "lorem ipsum dolor sit amet")
		printf("SUCESSO 04\n");
	else
		ft_print_result(str);

	if (ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30) == NULL)
		printf("SUCESSO 05\n");
	else
	{
		char *str = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
		printf("%s\n", str);
	}
	if (ft_strnstr("lorem ipsum dolor sit amet", "dol", 30) == "dolor sit amet")
		printf("SUCESSO 06\n");
	else
		ft_print_result(str);

	if (ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30) == NULL)
		printf("SUCESSO 07\n");
	else
		ft_print_result(str);

	if (ft_strnstr("lorem ipsum dolor sit amet", "sit", 10) == NULL)
		printf("SUCESSO 08\n");
	else
		ft_print_result(str);

	if (ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15) == NULL)
		printf("SUCESSO 09\n");
	else
		ft_print_result(str);

	if (ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0) == NULL)
		printf("SUCESSO 10\n");
	else
		ft_print_result(str);

	return (0);
}
