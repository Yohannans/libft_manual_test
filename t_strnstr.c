/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strnstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:07:45 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:06:05 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	t_strnstr(int argc, char **argv)
{
	if (argc >= 5)
		printf("%s\n", ft_strnstr(argv[2], argv[3], atoi(argv[4])));
}
