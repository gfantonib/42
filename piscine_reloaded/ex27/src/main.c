/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:50:12 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/19 11:10:23 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
	else
		ft_display_file(argv[1]);
	return (0);
}
