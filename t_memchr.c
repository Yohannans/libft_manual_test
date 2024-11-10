/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memchr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:44:45 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:01:40 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	t_memchr(int argc, char **argv)
{
	if (argc >= 5)
		printf("%s\n", (char *)ft_memchr(argv[2], argv[3][0], atoi(argv[4])));
}
