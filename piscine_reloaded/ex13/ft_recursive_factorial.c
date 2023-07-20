/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:37:01 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 18:58:44 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

// int	main(void)
// {
// 	int	number;
// 	int	fact;

// 	number = -1;
// 	fact = ft_recursive_factorial(number);
// 	printf("%d! = %d\n", number, fact);
// 	return (0);
// }