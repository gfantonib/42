/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:23:29 by gfantoni          #+#    #+#             */
/*   Updated: 2023/06/04 14:50:08 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compilar = cc -Wall -Wextra -Werror 
// checar a norma = norminette -R CheckForbiddenSourceHeader

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
