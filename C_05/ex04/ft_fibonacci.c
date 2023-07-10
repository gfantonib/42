/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:06:43 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 21:15:31 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function ft_fibonacci that returns the 
// n-th element of the Fibonacci
// sequence, the first element being at the 0 index. 
// We’ll consider that the Fibonacci
// sequence starts like this: 0, 1, 1, 2.
// • Overflows must not be handled, the function return will be undefined.
// • Here’s how it should be prototyped :
// • Obviously, ft_fibonacci has to be recursive.
// • If the index is less than 0, the function should return -1.
// Allowed functions : None

// #include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index <= 1)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
    int p = -2;
    printf("position: %d\nnbr: %d\n", p, ft_fibonacci(p));
    return (0);
}