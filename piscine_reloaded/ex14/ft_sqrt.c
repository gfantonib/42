/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:03:40 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/18 12:03:26 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
			{
				return (index);
			}
			else if (index >= 46341)
			{
				return (0);
			}
			index++;
		}
	}
	return (0);
}

//int	main(void)
//{
//	int	number;
//	int sqrt;
//
//	number = 176579920;
//	sqrt = ft_sqrt(number);
//	printf("sqrt of %d = %d\n", number, sqrt);
//	return (0);
//}
