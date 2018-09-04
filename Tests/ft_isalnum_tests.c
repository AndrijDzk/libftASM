/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:05:01 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 11:05:03 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm_tests.h"
#include "libftasm.h"

int		ft_isalnum_tests(void)
{
	return (test_two_int_int_funcs(&ft_isalnum, &isalnum));
}
