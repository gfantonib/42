/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:07:37 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 19:00:03 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

// int	main(void)
// {
// 	char	str[] = "Melvin num país tropical";
// 	int len;

// 	len = ft_strlen(str);
// 	printf("%d\n", len);
// 	return (0);
// }