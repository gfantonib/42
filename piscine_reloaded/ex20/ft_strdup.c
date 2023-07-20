/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:42:45 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 19:01:52 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

static int	str_len(char const *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

static char	*str_new(int n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strdup(char const *src)
{
	char	*dest;
	char	*start;

	dest = str_new(str_len(src));
	if (!dest)
		return (NULL);
	start = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}

void	mudar_int(int *numero)
{
	*numero = 25;
}

// int	main(void)
// {
// 	char str[] = "Hello, World!";
// 	char *dup = ft_strdup(str);

// 	// char *dup2 = ft_strdup(NULL);
// 	// printf("%s\n", dup);
// 	return (0);
// }
