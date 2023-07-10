/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:08:25 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 11:45:37 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that returns the square root 
// of a number (if it exists), or 0 if the
// square root is an irrational number.
// • Here’s how it should be prototyped :
//Allowed functions : None
// 46341

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n * n <= nb)
		{
			if (n * n == nb)
				return (n);
			else if (n >= 46341)
				return (0);
			n++;
		}
	}
	return (0);
}

// int main()
// {
//     int numb = 0;
//     printf("%d\n", ft_sqrt(numb));
//     return 0;
// }