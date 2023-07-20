/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:15:50 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 19:00:10 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		c = c + 1;
	}
	return (s1[c] - s2[c]);
}

// int	main(void)
// {
// 	int	cmp1;
// 	int cmp2;

// 	char	s1[] = "junho";
// 	char	s2[] = "julho";
// 	cmp1 = ft_strcmp(s1, s2);
// 	cmp2 = strcmp(s1, s2);
// 	printf("mine: %d\ntheirs: %d\n", cmp1, cmp2);
// 	return (0);
// }