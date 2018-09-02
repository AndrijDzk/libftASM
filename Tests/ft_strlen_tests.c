/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 17:05:41 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/02 17:05:43 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm.h"
#include <string.h>

int		ft_strlen_tests(void)
{
	char*		a = "Hello world!\n";
	char*		b = NULL;
	int			ret1;
	int			ret2;

	if ((ret1 = strlen(a)) != (ret2 = ft_strlen(a)))
		return (1);
	ft_strlen(b);
	return (0);
}
