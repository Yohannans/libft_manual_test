/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 00:36:23 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:46:36 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t_strdup(int argc, char **argv)
{
	char	*str;
	
	if (argc >= 3)
	{
		str = ft_strdup(argv[2]);
		printf("%s,%p\n", str, str);
		free(str);
	}
}
