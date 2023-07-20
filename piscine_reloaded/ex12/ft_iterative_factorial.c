/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:34:33 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 19:38:28 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else
	{
		while (nb >= 1)
		{
			fact = fact * nb;
			nb = nb - 1;
		}
	}
	return (fact);
}

// int	main(void)
// {
// 	int	number;
// 	int fact;

// 	number = 13;
// 	fact = ft_iterative_factorial(number);
// 	printf("%d! = %d\n", number, fact);
// 	return (0);
// }