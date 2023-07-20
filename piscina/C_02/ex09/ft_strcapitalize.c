/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:40:04 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 16:43:22 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that capitalizes the first 
// letter of each word and transforms all
// other letters to lowercase.
// A word is a string of alphanumeric characters.
// char *ft_strcapitalize(char *str);
// space = 20

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] = str[c] - ('a' - 'A');
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] = str[c] + ('a' - 'A');
		else if (((str[c] < '0') || (str[c] > '9' && str[c] < 'A'))
			|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}

int	main(void)
{
	char	long_johnson[] = "";
	printf("%s\n", ft_strcapitalize(long_johnson));
	return (0);
}
