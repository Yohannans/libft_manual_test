/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_putnbr_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:28:20 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 15:28:25 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void	t_putnbr_ft(int argc, char **argv)
{
	int fd;

	if (argc >= 3)
	{
		fd = open("test.txt", O_WRONLY | O_APPEND | O_CREAT, 0640);
		ft_putnbr_fd(ft_atoi(argv[2]), fd);
		close(fd);
	}
}
