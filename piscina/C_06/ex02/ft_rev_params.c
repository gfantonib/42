/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:16:19 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 20:44:10 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : write

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	f;
	int	s;

	f = (argc - 1);
	s = 0;
	if (argc > 1)
	{	
		while (f > 0)
		{	
			s = 0;
			while (argv[f][s] != '\0')
			{
				write(1, &argv[f][s], 1);
				s++;
			}
			write(1, "\n", 1);
			f--;
		}
	}
	return (0);
}
