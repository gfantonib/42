/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:02:58 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 11:56:31 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a recursive function that returns the 
// factorial of the number given as a parameter.
// • If the argument is not valid the function should return 0.
// • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
// Allowed functions : None
// int ft_recursive_factorial(int nb);
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

// int main()
// {
//     int num = 1;
// 		printf("Factorial of %d is %d", num, ft_recursive_factorial(num));
//     return 0;
// }
