/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:24:26 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/04 14:50:16 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int d)
{
	if (d >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
