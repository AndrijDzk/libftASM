/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:23:23 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 12:23:25 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libftasm.h"

int		ft_memset_tests(void)
{
	char	*a;
	char	*b;
	size_t	i;

	a = (char*)malloc(10 * sizeof(*a));
	b = (char*)malloc(10 * sizeof(*b));
	memset(a, 1, 10);
	if (ft_memset(b, 1, 10) != b)
	{
		free(a);
		free(b);
		return (1);
	}
	i = 0;
	while (i < 10)
	{
		if (a[i] != b[i])
			return (1);
		i++;
	}
	free(a);
	free(b);
	if (ft_memset(0, 1, 10))
		return (1);
	return (0);
}
