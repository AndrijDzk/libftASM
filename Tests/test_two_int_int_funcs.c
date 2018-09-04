/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_two_int_int_funcs.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:11:39 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 12:11:55 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		test_two_int_int_funcs(int (*f1)(int), int (*f2)(int))
{
	const int	tst_symbols[] = {0, '\n', '!', '0', '5', '9', ':',
								'@', 'A', 'H', 'Z', '[', '`', 'a',
								'h', 'z', '{', '}', 127, -1, 128};
	int			ret1;
	int			ret2;
	size_t		i;

	i = 0;
	while (i < 21)
	{
		ret1 = (*f1)(tst_symbols[i]);
		ret2 = (*f2)(tst_symbols[i]);
		if (ret1 != ret2)
			return (1);
		i++;
	}
	return (0);
}
