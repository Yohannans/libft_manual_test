/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isprint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:36:27 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 11:58:45 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	t_isprint(int argc, char **argv)
{
	if (argv >= 3)
		printf("%d\n", ft_isprint(atoi(argv[2])));
}
