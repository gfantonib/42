/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:39:54 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/14 19:09:17 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include "ft_abs.h"

// int	main(void)
// {
// 	printf("%d\n", ABS(-1234));
// }

#ifndef FT_ABS_H

# define FT_ABS_H

# define ABS(Value) (Value > 0 ? Value : -Value)

#endif
