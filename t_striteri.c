/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_striteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:41:22 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:24:22 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t_func(unsigned int i, char *s)
{
	printf("%d\n", i);
	*s = ft_toupper(*s);
}

void	t_striteri(int argc, char **argv)
{
	if (argc >= 3)
	{
		ft_striteri(argv[2], t_func);
		printf("%s\n", argv[2]);
	}
}
