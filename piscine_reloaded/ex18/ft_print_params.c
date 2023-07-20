/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:50:45 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 19:00:16 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	f;
	int	s;

	f = 1;
	s = 0;
	if (argc > 1)
	{
		while (f < argc)
		{	
			s = 0;
			while (argv[f][s] != '\0')
			{
				ft_putchar(argv[f][s]);
				s++;
			}
			ft_putchar('\n');
			f++;
		}
	}
	return (0);
}
