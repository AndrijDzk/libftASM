/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:53:46 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/02 15:53:48 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include "libftasm_tests.h"

int		ft_isalpha_tests(void)
{
	return (test_two_int_int_funcs(&ft_isalpha, &isalpha));
}
