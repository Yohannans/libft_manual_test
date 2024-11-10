/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:20:41 by yansquer          #+#    #+#             */
/*   Updated: 2024/10/25 12:22:50 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*list;

	if (argc == 2)
	{
		list = ft_lstnew(ft_strdup(argv[1]));
		printf("%s\n%p\n", (char *)list->content, list->next);
		free(list->content);
		free(list);
	}
	return (0);
}
