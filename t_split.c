/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:57:40 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:20:04 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t_split(int argc, char **argv)
{
	int		i;
	char	**out;

	if (argc >= 4)
	{
		out = ft_split(argv[2], argv[3][0]);
		i = 0;
		while (out[i])
		{
			printf("%s\n", out[i]);
			free(out[i]);
			i++;
		}
		free(out);
	}
}
