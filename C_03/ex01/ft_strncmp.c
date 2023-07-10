/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:19:24 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 14:16:08 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// Reproduce the behavior of the function strncmp (man strncmp).
// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;
	int				diff;

	c = 0;
	diff = 0;
	while ((c < n) && !diff && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
		c = c + 1;
	}
	if ((c < n) && !diff && (s1[c] == '\0' || s2[c] == '\0'))
	{
		diff = (unsigned char)s1[c] - (unsigned char)s2[c];
	}
	return (diff);
}

// int	main(void)
// {
// 	unsigned int	n;
// 	char			word_1[] = "men in black";
// 	char			word_2[] = "men in blue";
// 	char			word_3[] = "men in green";
// 	n = 3;
// 	printf("return w1 - w2 = %d\n", ft_strncmp(word_1, word_2, n));
// 	printf("return w2 - w3 = %d\n", ft_strncmp(word_2, word_3, n));
// 	return (0);
// }