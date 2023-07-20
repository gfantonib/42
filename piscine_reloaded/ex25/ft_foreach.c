/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:04:30 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/19 11:04:05 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	index;

	index = 0;
	if (tab)
	{
		while (index < length)
		{
			f(tab[index]);
			index++;
		}
	}
}

//void	ft_power_two(int nb)
//{
//	int	power;
//
//	power = nb * nb;
//	printf("%d ^ 2 = %d\n", nb, power);
//}
//
//int	main(void)
//{
//	int	my_array[] = {1, 2, 3, 4};
//
//	ft_foreach(my_array, 4, ft_power_two);
//	return (0);
//} 
