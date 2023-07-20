/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:33:55 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/09 16:00:10 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the 
// string given as a parameter contains only
// digits, and 0 if it contains any other character.
// int ft_str_is_numeric(char *str);

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0') || (str[c] > '9'))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric(""));
// 	return (0);
// }
