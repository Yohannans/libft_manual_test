/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 06:32:47 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 16:41:02 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tester.h"

int	main(int argc, char **argv)
{
	int	n;

	if (argc >= 2)
	{
		n = atoi(argv[1]);
		if (n == 0)
			t_isalpha(argc, argv);
		else if (n == 1)
			t_isdigit(argc, argv);
		else if (n == 2)
			t_isalnum(argc, argv);
		else if (n == 3)
			t_isascii(argc, argv);
		else if (n == 4)
			t_isprint(argc, argv);
		else if (n == 5)
			t_strlen(argc, argv);
		else if (n == 6)
			t_memset(argc, argv);
		else if (n == 7)
			t_bzero(argc, argv);
		else if (n == 8)
			t_memcpy(argc, argv);
		else if (n == 9)
			t_memmove(argc, argv);
		else if (n == 10)
			t_strlcpy(argc, argv);
		else if (n == 11)
			t_strlcat(argc, argv);
		else if (n == 12)
			t_toupper(argc, argv);
		else if (n == 13)
			t_tolower(argc, argv);
		else if (n == 14)
			t_strchr(argc, argv);
		else if (n == 15)
			t_strrchr(argc, argv);
		else if (n == 16)
			t_strncmp(argc, argv);
		else if (n == 17)
			t_memchr(argc, argv);
		else if (n == 18)
			t_memcmp(argc, argv);
		else if (n == 19)
			t_strnstr(argc, argv);
		else if (n == 20)
			t_atoi(argc, argv);
		else if (n == 21)
			t_calloc(argc, argv);
		else if (n == 22)
			t_strdup(argc, argv);
		else if (n == 23)
			t_substr(argc, argv);
		else if (n == 24)
			t_strjoin(argc, argv);
		else if (n == 25)
			t_strtrim(argc, argv);
		else if (n == 26)
			t_split(argc, argv);
		else if (n == 27)
			t_itoa(argc, argv);
		else if (n == 28)
			t_strmapi(argc, argv);
		else if (n == 29)
			t_striteri(argc, argv);
		else if (n == 30)
			t_putchar_fd(argc, argv);
		else if (n == 31)
			t_putstr_fd(argc, argv);
		else if (n == 32)
			t_putendl_fd(argc, argv);
		else if (n == 33)
			t_putnbr_fd(argc, argv);
		else
			printf("Not a correct number\n");
	}
}
