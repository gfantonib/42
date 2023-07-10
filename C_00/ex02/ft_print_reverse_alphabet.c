/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:52:55 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/04 14:50:12 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	inverse_alphabeth;

	inverse_alphabeth = 'z';
	while (inverse_alphabeth >= 'a')
	{
		ft_putchar (inverse_alphabeth);
		inverse_alphabeth = inverse_alphabeth - 1;
	}
}
