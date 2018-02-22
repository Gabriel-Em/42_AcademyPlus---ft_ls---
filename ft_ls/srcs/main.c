/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 21:58:46 by gpop              #+#    #+#             */
/*   Updated: 2018/02/14 08:53:51 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.h"
#include "controller.h"
#include "flag_input.h"
#include "file_or_dir_input.h"
#include "flag_validator.h"
#include "input_destroy.h"

int	main(int argc, char **argv)
{
	char	**file_list;
	char	*flags;

	file_list = NULL;
	if (argc == 1)
	{
		if (fill_flistwithcurrent(&file_list) == -1)
			exit_with_err("malloc error", &file_list, &flags);
	}
	else
	{
		fill_flag_list(&flags, argv);
		if (has_flags_only(argv, argc))
		{
			if (fill_flistwithcurrent(&file_list) == -1)
				exit_with_err("malloc error", &file_list, &flags);
		}
		else
			fill_filelist(&file_list, &flags, argv, argc);
	}
	process(&file_list, &flags);
	free_input(&file_list, &flags);
	return (0);
}
