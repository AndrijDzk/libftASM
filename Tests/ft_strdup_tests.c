/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 13:30:48 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 13:30:50 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libftasm.h"

static int		segfault_tests(void)
{
	if (ft_strdup(0))
		return (1);
	else
		return (0);
}

int				ft_strdup_tests(void)
{
	char	*str;
	char	*my;
	char	*sys;
	size_t	len;
	size_t	i;

	str = "Hello world!\n";
	len = ft_strlen(str);
	my = ft_strdup(str);
	sys = strdup(str);
	i = 0;
	while (i < len)
	{
		if (my[i] != sys[i])
			return (1);
		i++;
	}
	free(my);
	free(sys);
	if (segfault_tests())
		return (1);
	else
		return (0);
}
