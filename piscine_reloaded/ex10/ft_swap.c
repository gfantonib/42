/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:01:31 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 18:57:26 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*p_a;
// 	int	*p_b;

// 	a = 5;
// 	b = 3;
// 	p_a = &a;
// 	p_b = &b;
// 	printf("%d\n%d\n", a, b);
// 	ft_swap(p_a, p_b);
// 	printf("%d\n%d\n", a, b);
// 	return(0);
// }