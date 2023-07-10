/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:22:55 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/13 12:09:44 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strlcpy (man strlcpy)
// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

// The strlcpy() and strlcat() functions 
// copy and concatenate strings respectively. 
// They are designed to be safer, more 
// consistent, and less error prone replacements 
// for strncpy(3) and strncat(3). Unlike those 
// functions, strlcpy() and strlcat() take 
// the full size of the buffer (not just the 
// length) and guarantee to NUL-terminate 
// the result (as long as size is larger than 
// 0 or, in the case of strlcat(), as long as 
// there is at least one byte free in dst). 
// Note that a byte for the NUL should be 
// included in size. Also note that strlcpy() 
// and strlcat() only operate on true ''C'' 
// strings. This means that for strlcpy() src 
// must be NUL-terminated and for strlcat() 
// both src and dst must be NUL-terminated.

// char	*s, *p, buf[BUFSIZ];

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	index;

	count = 0;
	index = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

int	main(void)
{
	char	src[] = "aaaaaa";
	char	dest[] = "fffffffffff";
	unsigned int	n;

	n = 5;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tn: %d\n", src, dest, n);
	n = ft_strlcpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tn: %d\n", src, dest, n);
	return (0);
}
