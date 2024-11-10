/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_putnbr_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:28:20 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 16:03:12 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void	t_putnbr_fd(int argc, char **argv)
{
	int fd;

	if (argc >= 3)
	{
		fd = open("test.txt", O_WRONLY | O_APPEND | O_CREAT, 0640);
		ft_putnbr_fd(ft_atoi(argv[2]), fd);
		close(fd);
	}
}
