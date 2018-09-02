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

void		ft_isalpha_tests(void)
{
	if (ft_isalpha('A'))
		ft_puts("A - true");
	else
		ft_puts("A - false");
	if (ft_isalpha('B'))
		ft_puts("B - true");
	else
		ft_puts("B - false");
	if (ft_isalpha('Z'))
		ft_puts("Z - true");
	else
		ft_puts("Z - false");
	if (ft_isalpha('a'))
		ft_puts("a - true");
	else
		ft_puts("a - false");
	if (ft_isalpha('b'))
		ft_puts("b - true");
	else
		ft_puts("b - false");
	if (ft_isalpha('z'))
		ft_puts("z - true");
	else
		ft_puts("z - false");
	if (ft_isalpha('!'))
		ft_puts("! - true");
	else
		ft_puts("! - false");
	if (ft_isalpha('\n'))
		ft_puts("n - true");
	else
		ft_puts("n - false");
	if (ft_isalpha('['))
		ft_puts("[ - true");
	else
		ft_puts("[ - false");
}
