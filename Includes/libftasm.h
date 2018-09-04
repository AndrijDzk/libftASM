/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftasm.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 20:59:10 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/01 20:59:12 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTASM_H
# define LIBFTASM_H
# include <stdlib.h>
# include <ctype.h>

void		ft_bzero(void *ptr, size_t n);

char		*ft_strcat(char *s1, const char *s2);

int			ft_isalpha(int c);

int			ft_isdigit(int c);

int			ft_isalnum(int c);

int			ft_isascii(int c);

int			ft_isprint(int c);

int			ft_toupper(int c);

int			ft_tolower(int c);

int			ft_puts(char *str);

size_t		ft_strlen(const char *s);

void		*ft_memset(void *ptr, int c, size_t len);

void		*ft_memcpy(void *dst, void *src, size_t n);

char		*ft_strdup(char *s1);

int			ft_cat(int fd);

#endif
