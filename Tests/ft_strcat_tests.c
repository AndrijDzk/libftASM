/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:55:01 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/02 15:55:03 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libftasm.h"

static void		segfault_tests(void)
{
	char	*a;

	a = "Hello World!\n";
	ft_strcat(a, 0);
	ft_strcat(0, a);
	ft_strcat(0, 0);
}

static int		init(void *my, void *sys)
{
	char	*b;

	b = "Hello";
	ft_bzero(my, 10);
	ft_bzero(sys, 10);
	ft_memset(my, '0', 3);
	ft_memset(sys, '0', 3);
	if (ft_strcat(my, b) != my)
		return (1);
	strcat(sys, b);
	return (0);
}

int				ft_strcat_tests(void)
{
	char	*my;
	char	*sys;
	size_t	i;
	int		ret;

	ret = 0;
	my = (char*)malloc(10 * sizeof(*my));
	sys = (char*)malloc(10 * sizeof(*sys));
	if (init(my, sys))
		ret++;
	i = 0;
	while (i < 10)
	{
		if (my[i] != sys[i])
			ret++;
		i++;
	}
	free(my);
	free(sys);
	segfault_tests();
	return (ret);
}
