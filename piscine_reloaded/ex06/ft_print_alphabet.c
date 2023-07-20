/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:49:56 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 18:56:54 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar (c);
		c++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
