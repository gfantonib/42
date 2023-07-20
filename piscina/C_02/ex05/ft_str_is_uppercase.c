/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:32:50 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/09 15:55:26 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the 
// string given as a parameter contains only
// uppercase alphabetical characters, and 0 
// if it contains any other character.

// int ft_str_is_uppercase(char *str);

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] < 'A') || (str[counter] > 'Z'))
		{
			return (0);
		}
		counter = counter + 1;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*long_johnson;
// 	int	validator;

// 	long_johnson = "";
// 	validator = ft_str_is_uppercase(long_johnson);
// 	printf("%d\n", validator);
// 	return (0);
// }
