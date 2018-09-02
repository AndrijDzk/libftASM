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

void		ft_bzero(void* ptr, size_t n);

void		ft_strcat(char* s1, const char* s2);

int			ft_isalpha(int c);

int			ft_toupper(int c);

int			ft_tolower(int c);

int			ft_puts(char* str);

size_t		ft_strlen(const char* s);

int			ft_bzero_tests(void);

int			ft_strcat_tests(void);

void		ft_isalpha_tests(void);

int			ft_puts_tests(void);

int			ft_strlen_tests(void);

#endif