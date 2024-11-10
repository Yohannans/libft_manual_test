/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:28:51 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 14:58:33 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t_strchr(int argc, char **argv)
{
	if (argc >= 4)
		printf("%s\n", ft_strchr(argv[2], argv[3][0]));
}
