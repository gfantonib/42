/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:23:56 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/13 21:34:21 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// Reproduce the behavior of the function strstr (man strstr).
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	f;

	s = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[s] != '\0')
	{
		f = 0;
		while ((str[s + f] == to_find[f]) && (str[s + f] != '\0'))
		{
			if (to_find[f + 1] == '\0')
			{
				return (&str[s]);
			}
			f++;
		}
		s++;
	}
	return (0);
}

int	main(void)
{
	char	*the_big_line;
	char	*the_small_line;
	the_big_line = "999999912399999";
	the_small_line = "123";
	printf("the big line: %s\n", the_big_line);
	printf("the small line: %s\n\n", the_small_line);
	printf("point of contact: %s\n", ft_strstr(the_big_line, the_small_line));
	return (0);
}
