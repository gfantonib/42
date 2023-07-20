/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:01:30 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/13 14:25:41 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strncpy (man strncpy).
// char *ft_strncpy(char *dest, char *src, unsigned int n);

// A função strncpy() é semelhante à função strcpy(), exceto que no
// máximo n bytes de src são copiados. Se não houver nenhum caractere
// NULL entre o primeiro caractere n de src, a string colocada em dest
// não será terminada em NULL. Se o comprimento de src for menor que
// n, strncpy() grava caracteres NULL adicionais em dest para garantir
// que um total de n caracteres sejam gravados.

// char *strncpy( char *dest, const char *src, size_t n )

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((src[c] != '\0') && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

int	main(void)
{
	char	src[50] = "aaaaaaaaa";
	char	dest[50] = "bbbbbbbbbbbb";
	unsigned int	n;

	n = 3;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
