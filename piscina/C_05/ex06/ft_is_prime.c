/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:09:45 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 11:46:26 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that returns 1 if the 
// number given as a parameter is a prime
// number, and 0 if it isn’t
//Allowed functions : None

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (c <= (nb / 2))
	{
		if (nb % c == 0)
		{
			return (0);
		}
		c++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	number;
// 	int	result;
// 	number = -121212;
// 	result = ft_is_prime(number);
// 	if (result == 1)
// 	{
// 		printf("%d is prime.\n", number);
// 	}
// 	if (result == 0)
// 	{
// 		printf("%d is not prime.\n", number);
// 	}
// 	return (0);
// }
