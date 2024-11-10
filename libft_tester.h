/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tester.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yansquer <yansquer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:05:25 by yansquer          #+#    #+#             */
/*   Updated: 2024/11/10 11:28:44 by yansquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_TESTER_H
# define LIBFT_TESTER_H
# include "libft.h"
# include "stdio.h"
# include "stdlib.h"

void	t_isalpha(int argc, char **argv);
void	t_isdigit(int argc, char **argv);
void	t_isalnum(int argc, char **argv);
void	t_isascii(int argc, char **argv);
void	t_isprint(int argc, char **argv);
void	t_strlen(int argc, char **argv);
void	t_memset(int argc, char **argv);
void	t_bzero(int argc, char **argv);
void	t_memcpy(int argc, char **argv);
void	t_memmove(int argc, char **argv);
void	t_strlcpy(int argc, char **argv);
void	t_strlcat(int argc, char **argv);
void	t_toupper(int argc, char **argv);
void	t_tolower(int argc, char **argv);
void	t_strchr(int argc, char **argv);
void	t_strrchr(int argc, char **argv);
void	t_strncmp(int argc, char **argv);
void	t_memchr(int argc, char **argv);
void	t_memcmp(int argc, char **argv);
void	t_strnstr(int argc, char **argv);
void	t_atoi(int argc, char **argv);
void	t_calloc(int argc, char **argv);
void	t_strdup(int argc, char **argv);
void	t_substr(int argc, char **argv);
void	t_strjoin(int argc, char **argv);
void	t_strtrim(int argc, char **argv);
void	t_split(int argc, char **argv);
void	t_itoa(int argc, char **argv);
void	t_strmapi(int argc, char **argv);
void	t_striteri(int argc, char **argv);
void	t_putchar_fd(int argc, char **argv);
void	t_putstr_fd(int argc, char **argv);
void	t_putendl_fd(int argc, char **argv);
void	t_putnbr_fd(int argc, char **argv);

#endif
