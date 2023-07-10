/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:51:20 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/13 20:32:11 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays a string of 
// characters on the standard output.
// Allowed functions : write

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

// int	main(void)
// {
// 	char	long_johnson[] = "Melvin vive!";
// 	char	*p_lj;
// 	p_lj = long_johnson;

// 	ft_putstr(p_lj);
// 	return (0);
// }