/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstadd_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:48:00 by yansquer          #+#    #+#             */
/*   Updated: 2024/10/26 11:11:18 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	main(int argc, char **argv)
{
	t_list	*list;
	if (argc == 3)
	{
		list = ft_lstnew(ft_strdup(argv[1]));
		ft_lstadd_front(&list, ft_lstnew(ft_strdup(argv[2])));
		printf("%s, %p\n%s, %p\n", (char *)list->content, list->next, 
			(char *)list->next->content, list->next->next);
		free(list->next->content);
		free(list->next);
		free(list->content);
		free(list);
	}
	return (0);
}
