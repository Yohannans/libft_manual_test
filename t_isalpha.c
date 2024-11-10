/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_isalpha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:36:27 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 11:58:07 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

void	t_isalpha(int argc, char **argv)
{
	if (argv >= 3)
		printf("%d\n", ft_isalpha(atoi(argv[2])));
}
