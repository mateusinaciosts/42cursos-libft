/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsanto <matsanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:58:12 by matsanto          #+#    #+#             */
/*   Updated: 2023/05/18 18:11:58 by matsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_matriz(char const *s, char c)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			length++;
		}
		i++;
	}
	length++;
	return (length);
}

void	len_array(char const *s, char c, char **matriz)
{
	int	i;
	int	j;
	int	len_a;
	int	last_a;

	i = 0;
	j = 0;
	len_a = 0;
	while (s[i])
	{
		len_a++;
		if (s[i] == c || s[i] == '\0')
		{
			matriz[j] = (char *)malloc(len_a * sizeof(char));
			j++;
			len_a = 0;
			last_a = i + 1;
		}
		i++;
	}
	matriz[j] = (char *)malloc((len_a + 1) * sizeof(char));
}

void	write_str(char const *s, char c, char **matriz)
{
	int	i;
	int	i_m;
	int	j;

	i = 0;
	i_m = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			matriz[j][i_m] = '\0';
			j++;
			i++;
			i_m = 0;
		}
		matriz[j][i_m] = s[i];
		i++;
		i_m++;
	}
	matriz[j][i_m] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	int		len_m;

	len_m = len_matriz(s, c);
	matriz = (char **)malloc((len_m + 1) * sizeof(char *));
	len_array(s, c, matriz);
	write_str(s, c, matriz);
	matriz[len_m] = '\0';
	return (matriz);
}

/* int	main(void)
{
	const char *str = "Hello,World,OK";
	char **substrings = ft_split(str, ',');
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", substrings[i]);
	}
} 
 */