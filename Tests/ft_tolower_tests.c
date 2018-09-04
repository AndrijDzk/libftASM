/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 10:40:33 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 10:40:40 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm_tests.h"
#include "libftasm.h"

int		ft_tolower_tests(void)
{
	return (test_two_int_int_funcs(&ft_tolower, &tolower));
}
