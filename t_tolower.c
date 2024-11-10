/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tolower.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:41:50 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 18:13:15 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t_tolower(int argc, char **argv)
{
	if (argc >= 3)
		printf("%c\n", ft_tolower(argv[2][0]));
}
