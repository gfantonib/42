/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:23:51 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/04 14:50:18 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigit(int m, int n, int o)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = '0' + m;
	second_digit = '0' + n;
	third_digit = '0' + o;
	write(1, &first_digit, 1);
	write(1, &second_digit, 1);
	write(1, &third_digit, 1);
}

void	ft_comma_space(char f)
{
	write(1, &f, 1);
}

void	ft_print_comb(void)
{
	int	d1m;
	int	d2n;
	int	d3o;

	d1m = 0;
	while (d1m <= 7)
	{
		d2n = d1m + 1;
		while (d2n <= 8)
		{
			d3o = d2n + 1;
			while (d3o <= 9)
			{
				ft_putdigit (d1m, d2n, d3o);
				if (d1m != 7)
				{
					ft_comma_space(',');
					ft_comma_space(' ');
				}
				d3o++;
			}
			d2n++;
		}
		d1m++;
	}
}
