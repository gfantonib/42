/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:13:08 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 18:58:02 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int b;
// 	int div;
// 	int mod;
// 	int *p_div;
// 	int *p_mod;

// 	a = 53;
// 	b = 10;
// 	div = b/a;
// 	mod = b%a;
// 	p_div = &div;
// 	p_mod = &mod;
// 	printf("%d\n%d\n", div, mod);
// 	ft_div_mod(a, b, p_div, p_mod);
// 	printf("%d\n%d\n", div, mod);
// 	return (0);
// }