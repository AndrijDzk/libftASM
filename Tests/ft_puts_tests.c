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

	if ((ret1 = puts(NULL)) != (ret2 = ft_puts(NULL)))
		return (1);
	else if ((ret1 = puts("Hello world!")) != (ret2 = ft_puts("Hello world!")))
		return (1);
	else
		return (0);
}
