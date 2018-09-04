/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:21:48 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 11:21:50 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm_tests.h"
#include "libftasm.h"

int		ft_isascii_tests(void)
{
	return (test_two_int_int_funcs(&ft_isascii, &isascii));
}
