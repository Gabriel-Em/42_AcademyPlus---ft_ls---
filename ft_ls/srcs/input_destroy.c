/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 08:54:38 by gpop              #+#    #+#             */
/*   Updated: 2018/02/14 08:54:46 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input_destroy.h"

void	free_input(char ***file_list, char **flags)
{
	int i;

	i = 0;
	if (file_list && *file_list)
	{
		while ((*file_list)[i])
			free((*file_list)[i++]);
		free(*file_list);
		*file_list = NULL;
	}
	if (flags && *flags)
	{
		free(*flags);
		*flags = NULL;
	}
}
