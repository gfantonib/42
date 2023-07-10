/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:04:13 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 11:37:46 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create an iterated function that returns the value 
// of a power applied to a number.
// • A power lower than 0 returns 0.
// • Overflows must not be handled.
// • We’ve decided that 0 power 0 will returns 1
// • Here’s how it should be prototyped :
// Allowed functions : None

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	helper;

	helper = nb;
	if (power <= 0)
	{
		if (power == 0)
		{
			return (1);
		}
		return (0);
	}
	while (power > 1)
	{
		nb = nb * helper;
		power--;
	}
	return (nb);
}

// int main(void)
// {
//     int number;
//     int power;
//     int result;
//     number = -3;
//     power = 0;
//     result = ft_iterative_power(number, power);
//     printf("%d to the power of %d = %d\n", number, power, result);
//     return (0);
// }