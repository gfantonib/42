/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:12:38 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 19:18:27 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	c;

	tab = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (0);
	if (!tab)
		return (0);
	c = 0;
	while (min < max)
	{
		tab[c] = min;
		c++;
		min++;
	}
	return (tab);
}

// int	main(void)
// {
// 	int	c;
// 	int	*array;

// 	array = ft_range(-3, 3);
// 	c = 0;

// 	while (c < 6)
// 	{
// 		printf("%d\n", array[c]);
// 		c++;
// 	}
// 	return (0);
// }