/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_memset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:09:43 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:43:57 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	t_memset(int argc, char **argv)
{
	if (argc >= 5)
		printf("%s\n", (char *)ft_memset(argv[2], argv[3][0], atoi(argv[4])));
}
