/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 10:43:16 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 10:43:17 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm_tests.h"
#include "libftasm.h"

int		ft_toupper_tests(void)
{
	return (test_two_int_int_funcs(&ft_toupper, &toupper));
}
