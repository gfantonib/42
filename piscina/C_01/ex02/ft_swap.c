/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:30:08 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/06 11:29:41 by gfantoni         ###   ########.fr       */
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

// 	a = 1;
// 	b = 2;
// 	p_a = &a;
// 	p_b = &b;
// 	printf("a should be 1 and it is : %u\n", *p_a);
// 	printf("b should be 2 and it is : %u", *p_b);
// 	printf("\n");
// 	ft_swap(p_a, p_b);
// 	printf("a should be 1 and it is : %u\n", a);
// 	printf("b should be 2 and it is : %u", b);
// 	return (0);
// }
