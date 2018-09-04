/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:01:28 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 13:01:29 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libftasm.h"

static int		test(char *my, char *sys, size_t len)
{
	size_t		i;
	char		*str;

	str = "Hello!\n";
	if (ft_memcpy(my, str, len) != my)
		return (1);
	memcpy(sys, str, len);
	i = 0;
	while (i < len)
	{
		if (my[i] != sys[i])
			return (1);
		i++;
	}
	return (0);
}

int				ft_memcpy_tests(void)
{
	char	*my;
	char	*sys;
	int		ret;

	ret = 0;
	my = (char*)malloc(6 * sizeof(*my));
	sys = (char*)malloc(6 * sizeof(*sys));
	if (test(my, sys, 6))
	{
		free(my);
		free(sys);
		return (1);
	}
	if (ft_memcpy(0, my, 10))
		ret = 1;
	if (ft_memcpy(my, 0, 10) != my)
		ret = 1;
	if (ft_memcpy(0, 0, 10))
		ret = 1;
	free(my);
	free(sys);
	return (ret);
}
