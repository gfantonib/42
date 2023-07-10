/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 15:10:31 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/14 10:47:00 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the 
// string given as a parameter contains only
// printable characters, and 0 if it contains any other character.

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] < 32) || (str[counter] > 126))
		{
			return (0);
		}
		counter = counter + 1;
	}
	return (1);
}

int	main(void)
{
	char	long_johnson[] = "ddddd\tddddd";

	printf("%d\n", ft_str_is_printable(long_johnson));
	return (0);
}
