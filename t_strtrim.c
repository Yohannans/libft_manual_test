/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strtrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 00:36:23 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:18:54 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t_strtrim(int argc, char **argv)
{
	char	*str;
	
	if (argc >= 4)
	{
		str = ft_strtrim(argv[2], argv[3]);
		printf("%s\n", str);
		free(str);
	}
}
