/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:52:05 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/14 08:37:34 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays the number entered 
// as a parameter. The function has to be able to 
// display all possible values within an int type variable.
//Allowed functions : write
// void ft_putnbr(int nb);

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

// int	main(void)
// {
// 	ft_putnbr(-147483648);
// 	ft_putnbr(147483647);
// 	ft_putnbr(0);
// 	ft_putnbr(42);
// 	ft_putnbr(-42);
// }