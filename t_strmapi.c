/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strmapi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:51:46 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:23:43 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char t_func(unsigned int i, char c)
{
	printf("%d\n", i);
	return (ft_toupper(c));
}

void	t_strmapi(int argc, char **argv)
{
	char	*str;
	
	if (argc >= 3)
	{
		str = ft_strmapi(argv[2], t_func);
		printf("%s\n", str);
		free(str);
	}
}
