/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_strlcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:19:18 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 18:11:53 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t_strlcat(int argc, char **argv)
{
	char	*dest;
	size_t	len1;
	size_t	len2;

	if (argc >= 4)
	{
		len1 = ft_strlen(argv[2]);
		len2 = ft_strlen(argv[3]);
		dest = malloc(sizeof(char) * (len1 + len2 + 1));
		ft_strlcpy(dest, argv[2], len1 + 1);
		ft_strlcat(dest, argv[3], len1 + len2 + 1);
		printf("%s\n", dest);
		free(dest);
	}
}
