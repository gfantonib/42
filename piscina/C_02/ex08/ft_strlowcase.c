/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:02:48 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 16:42:32 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that transforms every letter to lowercase.
// char *ft_strlowcase(char *str);

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] > 64) && (str[counter] < 91))
		{
			str[counter] = str[counter] + 32;
		}
		counter = counter + 1;
	}
	return (str);
}

int	main(void)
{
	char	long_johnson[] = "[]@AGZ@[]";

	printf("%s\n", ft_strlowcase(long_johnson));
	return (0);
}
