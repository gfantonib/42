/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 11:29:52 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/08 15:48:42 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	*p_div;
	int	mod;
	int	*p_mod;

	a = 53;
	b = 0;
	div = 6;
	mod = 7;
	p_div = &div;
	p_mod = &mod;
	printf("%d\n", div);
	printf("%d\n", mod);
	ft_div_mod(a, b, p_div, p_mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}
