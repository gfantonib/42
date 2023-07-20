/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:41:13 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/06 12:02:13 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays a string of characters on the standard output

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Melvin num país tropical";
// 	char	*p_str;

// 	p_str = str;
// 	ft_putstr(p_str);
// 	return (0);
// }