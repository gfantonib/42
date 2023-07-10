/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:08:42 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/06 12:03:40 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that counts and returns the 
//number of characters in a string.

// #include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	number_of_char;

	number_of_char = 0;
	while (str[number_of_char] != '\0')
	{
		number_of_char = number_of_char + 1;
	}
	return (number_of_char);
}

// int	main(void)
// {
// 	char	str[] = "Melvin num país tropical";
// 	int	count;

// 	count = ft_strlen(str);
// 	printf("%d\n", count);
// 	return (0);
// }

// UMA OUTRA FORMA DE FAZER:

// void ft_strlen(char *str)
// {
// 	int	count;

// 	count = 0;
// 	while (*str != '\0')
// 	{
// 		count = count + 1;
// 		str = str + 1;
// 	}
// 	printf("%d\n", count);
// }
// int	main(void)
// {
// 	char	str[] = "Melvin num país tropical";
// 	char	*p_str;
// 	p_str = str;
// 	ft_strlen(p_str);
// 	return (0);
// }