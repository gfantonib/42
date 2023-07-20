/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:32:58 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/19 12:00:28 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
//int	ft_strlen(char *str)
//{
//	int	counter;
//
//	counter = 0;
//	while (*str != '\0')
//	{
//		counter++;
//		str++;
//	}
//	return (counter);
//}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	c;
	int	result;

	c = 0;
	result = 0;
	while (tab[c] != 0)
	{
		if (f(tab[c]) == 1)
			result++;
		c++;
	}
	return (result);
}

//int	main(void)
//{
//	int	nb;
//	
//	char	*my_array[] = {"aaa", "aa", "a", "r", "a", "mama", "ghg"};	
//	nb = ft_count_if(my_array, &ft_strlen);
//	printf("%d\n", nb);
//	return (0);
//}
