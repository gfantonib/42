/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:01:27 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 11:34:23 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create an iterated function that returns a number. 
// This number is the result of a
// factorial operation based on the number given as a parameter.
// • If the argument is not valid the function should return 0.
// • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
//Allowed functions : None
// n! = n * (n – 1)!
// n! = 1 if n = 0 or n = 1
//int ft_iterative_factorial(int nb);
// 13 quebra.
// 147483647

// #include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		fact = fact * nb;
		nb = nb - 1;
	}
	return (fact);
}

// int main()
// {
//     int num = 0;
//     printf("%d! is: %d", num, ft_iterative_factorial(num));
//     return 2;
// }