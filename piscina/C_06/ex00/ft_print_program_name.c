/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:11:47 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/15 20:42:44 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allowed functions : write

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc > 0)
	{
		while (argv[0][c] != '\0')
		{
			write(1, &argv[0][c], 1);
			c = c + 1;
		}
		write(1, "\n", 1);
	}
	return (0);
}
