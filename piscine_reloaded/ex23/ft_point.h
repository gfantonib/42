/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:10:07 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 19:18:11 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H

# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

// void	ft_putchar(char c);
// void	ft_putnbr(int c);
#endif

// #include <unistd.h>

// void	ft_putchar(char a)
// {
// 	write(1, &a, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 	{
// 		ft_putchar('-');
// 		ft_putchar('2');
// 		nb = 147483648;
// 	}
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');i
// 		nb *= -1;
// 	}
// 	if (nb < 10)
// 	{
// 		ft_putchar(nb + 48);
// 		return ;
// 	}
// 	else
// 		ft_putnbr(nb / 10);
// 	ft_putnbr(nb % 10);
// }

// #include "ft_point.h"

// void set_point(t_point *point)
// {
// 	point->x = 42;
// 	point->y = 21;
// }

// int main(void)
// {
// 	t_point point;i
// 	set_point(&point);
// 	ft_putnbr(point.x);
// 	ft_putnbr(point.y);
// 	return (0);
// }