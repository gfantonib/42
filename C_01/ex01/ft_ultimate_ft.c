/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:24:27 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/06 11:29:39 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Create a function that takes a pointer to pointer to 
//pointer to pointer to pointer to pointer to pointer to 
//pointer to pointer to int as a parameter and sets the value
//"42" to that int.

// #include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// int	main(void)
// {
// 	int	nbr;
// 	int	*p_nbr;
// 	int	**p_nbr2;
// 	int	***p_nbr3;
// 	int	****p_nbr4;
// 	int	*****p_nbr5;
// 	int	******p_nbr6;
// 	int	*******p_nbr7;
// 	int	********p_nbr8;
// 	int	*********p_nbr9;

// 	nbr = 21;
// 	p_nbr = &nbr;
// 	p_nbr2 = &p_nbr;
// 	p_nbr3 = &p_nbr2;
// 	p_nbr4 = &p_nbr3;
// 	p_nbr5 = &p_nbr4;
// 	p_nbr6 = &p_nbr5;
// 	p_nbr7 = &p_nbr6;
// 	p_nbr8 = &p_nbr7;
// 	p_nbr9 = &p_nbr8;
// 	printf("%d\n", nbr);
// 	ft_ultimate_ft(p_nbr9);
// 	printf("%d\n", nbr);
// 	return (0);
// }
