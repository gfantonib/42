/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:50:30 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/09 15:40:04 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the 
// string given as a parameter contains only
// lowercase alphabetical characters, and 0 
// if it contains any other character.
// int ft_str_is_lowercase(char *str);

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a') || (str[c] > 'z'))
		{
			return (0);
		}
		c = c + 1;
	}
	return (1);
}

// int	main(void)
// {
// 	int	validator;
// 	char	long_johnson[] = "grAsg";

// 	validator = ft_str_is_lowercase(long_johnson);
// 	printf("%d\n", validator);
// 	return (0);
// }
