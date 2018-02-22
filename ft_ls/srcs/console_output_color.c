/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console_output_color.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 01:44:07 by gpop              #+#    #+#             */
/*   Updated: 2018/02/15 17:15:38 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "console_output_color.h"

void	set_output_color(char file_type)
{
	if (file_type == 'X')
		ft_putstr(RESET);
	else if (file_type == 'l')
		ft_putstr(RED);
	else if (file_type == '-')
		ft_putstr(GRN);
	else if (file_type == 'c')
		ft_putstr(YEL);
	else if (file_type == 'b')
		ft_putstr(BLU);
	else if (file_type == 'd')
		ft_putstr(MAG);
	else if (file_type == 's')
		ft_putstr(CYN);
	else
		ft_putstr(WHT);
}
