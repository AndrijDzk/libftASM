/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_tests.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:52:20 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/02 15:52:21 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"

int		ft_bzero_tests(void)
{
	char	*a;
	size_t	i;

	ft_bzero(0, 1);
	a = (char*)malloc(10 * sizeof(*a));
	ft_bzero(a, 10);
	i = 0;
	while (i < 10)
	{
		if (a[i] != 0)
			return (1);
		i++;
	}
	free(a);
	return (0);
}
