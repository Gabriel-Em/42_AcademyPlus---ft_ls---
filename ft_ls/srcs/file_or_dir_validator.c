/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_or_dir_validator.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 16:16:08 by gpop              #+#    #+#             */
/*   Updated: 2018/02/14 08:22:36 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_or_dir_validator.h"

int	is_dir(char *path)
{
	struct stat file_info;

	if (lstat(path, &file_info) == 0)
		if ((file_info.st_mode & S_IFMT) == S_IFDIR)
			return (1);
	return (0);
}

int	is_hidden(char *filename)
{
	int i;

	i = ft_strlen(filename) - 1;
	while (i > 0 && filename[i] != '/')
		i--;
	return (filename[i + 1] == '.');
}

int	is_nonexistent(t_list *node)
{
	return (((t_f_stat*)(node->content))->file_type == 'X');
}
