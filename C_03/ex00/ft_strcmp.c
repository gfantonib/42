/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:17:29 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/14 17:05:56 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// Reproduce the behavior of the function strcmp (man strcmp).
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		c = c + 1;
	}
	return (s1[c] - s2[c]);
}

int	main(void)
{
	char	word_1[] = "men in black";
	char	word_2[] = "men in blue";
	char	word_3[] = "men in green";
	printf("return w1 - w2 = %d\n", ft_strcmp(word_1, word_2));
	printf("return w2 - w3 = %d\n", ft_strcmp(word_2, word_3));
	return (0);
}