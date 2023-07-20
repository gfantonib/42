/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:53:06 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 12:36:29 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	return (res * s);
}

// int main(void)
// {
//     char	ugly[] = "---+--+1234ab567";
// 	printf("%d\n", ft_atoi(ugly));
// 	return (0);
// }
