/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:09:43 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:47:06 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	t_strlcpy(int argc, char **argv)
{
	if (argc >= 5)
	{
		printf("%zu\n", ft_strlcpy(argv[2], argv[3], atoi(argv[3])));
		printf("%s\n", argv[2]);
	}
}
