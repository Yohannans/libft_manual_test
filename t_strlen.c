/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:05:48 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:45:52 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	t_strlen(int argc, char **argv)
{
	if (argc >= 3)
		printf("%lu\n", ft_strlen(argv[2]));
}
