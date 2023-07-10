/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:47:15 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/13 14:21:52 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strcpy (man strcpy).
// char *ft_strcpy(char *dest, char *src);

// A função strcpy() é usada para copiar a string de origem para a string
// de destino. Se o tamanho do buffer da string dest for maior que a
// string src, copie a string src para a string dest com o caractere NULL
// de terminação. Mas se o buffer dest for menor, então src copiará o
// conteúdo sem encerrar o caractere NULL. As strings não podem se
// sobrepor e a string de destino deve ser grande o suficiente para
// receber a cópia.

// char *strcpy( char *dest, const char *src )

#include <stdio.h> 

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

int	main(void)
{
	char	source[] = "a";
	char	destin[] = "bbbbbbbbbbbbb";
	char	*dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);
	dest = ft_strcpy(destin, source);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}

// UMA OUTRA FORMA DE FAZER

// char	*ft_strcpy(char *melvin, char *wallon)
// {
// 	int	count;

// 	count = 0;
// 	while(wallon[count] != '\0')
// 	{
// 		melvin[count] = wallon[count];
// 		count = count + 1;
// 	}
// 	melvin[count] = '\0';
// 	return(melvin);
// }

// int main(void)
// {
//     char	melvin_string[] = "Melvin num país tropical.";
// 	char	wallon_string[] = "Wallon in the world.";
// 	char	*after;

// 	printf("before the catastrophe\n\tmelvin_string: %s\n", melvin_string);
// 	printf("\twallon_string: %s\n", wallon_string);
// 	after = ft_strcpy(melvin_string, wallon_string);

// 	printf("after the catastrophe\n\tmelvin_string: %s\n", melvin_string);
// 	printf("\twallon_string: %s\n", wallon_string);

// 	printf("%c\n", melvin_string[21]);
// 	printf("%c\n", after[21]);
// 	return (0);

// }