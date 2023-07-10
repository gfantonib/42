/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:25:06 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/13 21:35:17 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// Reproduce the behavior of the function strlcat (man strlcat).
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;

	if (size <= ft_strlen(dest))
	{
		return (size + ft_strlen(src));
	}
	d = ft_strlen(dest);
	s = 0;
	while ((src[s] != '\0') && ((d + 1) < size))
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[s]));
}

int main(void)
{
    char	source[] = "num país tropical!";
    char	destin[] = "Melvin, ";
	unsigned int	n;

	n = 40;
	printf("source: %s\n", source);
	printf("destin: %s\n", destin);
	printf("result: %d\n", ft_strlcat(destin, source, n));
	return (0);
}