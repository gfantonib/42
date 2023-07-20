/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:21:03 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/13 21:32:58 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : None
// Reproduce the behavior of the function strcat (man strcat).
// #include <stdio.h>

int	ft_strlen(char	*str)
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

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	c;

	d = ft_strlen(dest);
	c = 0;
	while (src[c] != '\0')
	{
		dest[d] = src[c];
		d++;
		c++;
	}
	dest[d] = '\0';
	return (dest);
}

int	main(void)
{
	char	source[] = "in love";
	char	destin[] = "I'm a woman ";

	printf("source before: %s\n", source);
	printf("destin before: %s\n\n", destin);
	printf("source after: %s\n", source);
	printf("destin after: %s\n", ft_strcat(destin, source));
	return (0);
}	
