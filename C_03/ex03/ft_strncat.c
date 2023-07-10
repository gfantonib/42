/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:22:25 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/13 21:33:44 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// Reproduce the behavior of the function strncat (man strncat).
// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while ((src[s] != '\0') && (s < nb))
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[d + s] = '\0';
	return (dest);
}

int	main(void)
{
	char	source[] = "every day!";
	char	destin[] = "I drink your milkshake ";
    unsigned int     n;

    n = 20;
	printf("source before: %s\n", source);
	printf("destin before: %s\n\n", destin);
	printf("%s\n", ft_strncat(destin, source, n));
	return (0);
}