/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:00:11 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/07 18:17:17 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{		
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

int	main(void)
{
	int	a;
	int	b;
	int	*p_a;
	int	*p_b;

	a = -35;
	b = 0;
	p_a = &a;
	p_b = &b;
	printf("%d\n", a);
	printf("%d\n", b);
	ft_ultimate_div_mod(p_a, p_b);
	printf("%d\n", *p_a);
	printf("%d\n", *p_b);
	return (0);
}
