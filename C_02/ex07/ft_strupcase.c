/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:31:15 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 16:40:34 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that transforms every letter to uppercase.
// char *ft_strupcase(char *str);

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] > 96) && (str[counter] < 123))
		{
		str[counter] = str[counter] - 32;
		}
		counter = counter + 1;
	}
	return (str);
}

int	main(void)
{
	char	long_johnson[] = "abcderfgjklmauASDFGHKLL!@#$%*()";

	printf("%s\n", ft_strupcase(long_johnson));
	return (0);
}
