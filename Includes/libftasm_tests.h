/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftasm_tests.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:10:01 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 13:10:03 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTASM_TESTS_H
# define LIBFTASM_TESTS_H

int			ft_bzero_tests(void);

int			ft_strcat_tests(void);

int			ft_isalpha_tests(void);

int			ft_isdigit_tests(void);

int			ft_isalnum_tests(void);

int			ft_isascii_tests(void);

int			ft_isprint_tests(void);

int			ft_toupper_tests(void);

int			ft_tolower_tests(void);

int			ft_puts_tests(void);

int			ft_strlen_tests(void);

int			ft_memset_tests(void);

int			ft_memcpy_tests(void);

int			ft_strdup_tests(void);

int			ft_cat_tests(void);

int			test_two_int_int_funcs(int (*f1)(int), int (*f2)(int));

#endif
