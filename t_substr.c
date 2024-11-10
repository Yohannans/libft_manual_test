/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_substr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 00:36:23 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 16:04:01 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t_substr(int argc, char **argv)
{
	char	*str;
	
	if (argc >= 5)
	{
		str = ft_substr(argv[2], ft_atoi(argv[3]), ft_atoi(argv[4]));
		printf("%s\n", str);
		free(str);
	}
}
