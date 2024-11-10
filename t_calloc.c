/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_calloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:19:25 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:09:26 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t_calloc(int argc, char **argv)
{
	char	*str;

	if (argc >= 3)
	{
		str = ft_calloc(ft_atoi(argv[2]), ft_atoi(argv[3]));
		printf("%p/n", str);
		free(str);
	}
}
