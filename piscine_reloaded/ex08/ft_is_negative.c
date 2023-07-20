/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:50:12 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 19:33:13 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

// int	main(void)
// {
// 	int	n;

// 	n = -1234;
// 	ft_is_negative(n);
// 	return (0);
// }
