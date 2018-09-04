/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts_tests.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:59:33 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/02 15:59:35 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libftasm.h"

int		ft_puts_tests(void)
{
	int		ret1;
	int		ret2;

	ret1 = puts(NULL);
	ret2 = ft_puts(NULL);
	if (ret1 != ret2)
		return (1);
	ret1 = puts("Hello world!");
	ret2 = ft_puts("Hello world!");
	if (ret1 != ret2)
		return (1);
	return (0);
}
