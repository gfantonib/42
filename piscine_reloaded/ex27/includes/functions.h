/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfantoni <gfantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:46:32 by gfantoni          #+#    #+#             */
/*   Updated: 2023/07/18 16:13:30 by gfantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <fcntl.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_display_file(char *file_name);

#endif 
