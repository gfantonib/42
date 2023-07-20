/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:10:44 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 11:51:42 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns the next prime 
// number greater or equal to the number
// given as argument.
// Allowed functions : None
// int ft_find_next_prime(int nb);

// #include <stdio.h>

int	ft_is_prime(int nbr)
{
	int	n;

	n = 2;
	if (nbr < 2)
	{
		return (0);
	}
	while (n <= (nbr / 2))
	{
		if (nbr % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

// int	main(void)
// {
// 	int	number;
// 	int	result;
// 	number = -12312;
// 	result = ft_find_next_prime(number);
// 	printf("%d, the next is: %d\n", number, result);
//     return (0);
// }