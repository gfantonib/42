/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:24:54 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/04 14:50:13 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	growing_numbers;

	growing_numbers = '0';
	while (growing_numbers <= '9')
	{
		ft_putchar(growing_numbers);
		growing_numbers = growing_numbers + 1;
	}
}
