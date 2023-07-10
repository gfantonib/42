/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:50:25 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/13 18:16:42 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that counts and returns 
// the number of characters in a string.
//Allowed functions : None
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

// int	main(void)
// {
// 	char	long_johnson[] = "aaaaaaaaafvwe56778.;/=aa";
// 	printf("%d\n", ft_strlen(long_johnson));
// 	return (0);
// }