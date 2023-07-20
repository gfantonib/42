/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:05:26 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 11:58:08 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a recursive function that returns the 
// value of a power applied to a number.
// • A power lower than 0 returns 0.
// • Overflows must not be handled, the function return will be undefined.
// • We’ve decided that 0 power 0 will returns 1
// • Here’s how it should be prototyped :
// Allowed functions : None

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	h;

	h = nb;
	if (power <= 0)
	{
		if (power == 0)
		{
			return (1);
		}
		return (0);
	}
	return (h * ft_recursive_power(h, (power - 1)));
}

// int main(void)
// {
// 	int	nbr;
// 	int	power;
//     int	result;
// 	nbr = -2;
// 	power = 3;
//     result = ft_recursive_power(nbr, power);
// 	printf("%d to the power of %d = %d\n", nbr, power, result);
//     return (0);
// }