/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 20:59:00 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/01 20:59:02 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftasm_tests.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		main(void)
{
	if (ft_bzero_tests())
	{
		write(2, "ft_bzero - fail!\n", 17);
		return (1);
	}
	if (ft_strcat_tests())
	{
		write(2, "ft_strcat - fail!\n", 18);
		return (1);
	}
	if (ft_isalpha_tests())
	{
		write(2, "ft_isalpha - fail!\n", 19);
		return (1);
	}
	if (ft_isdigit_tests())
	{
		write(2, "ft_isdigit - fail!\n", 19);
		return (1);
	}
	if (ft_isalnum_tests())
	{
		write(2, "ft_isalnum - fail!\n", 19);
		return (1);
	}
	if (ft_isascii_tests())
	{
		write(2, "ft_isascii - fail!\n", 19);
		return (1);
	}
	if (ft_isprint_tests())
	{
		write(2, "ft_isprint - fail!\n", 19);
		return (1);
	}
	if (ft_toupper_tests())
	{
		write(2, "ft_toupper - fail!\n", 19);
		return (1);
	}
	if (ft_tolower_tests())
	{
		write(2, "ft_tolower - fail!\n", 19);
		return (1);
	}
	if (ft_puts_tests())
	{
		write(2, "ft_puts - fail!\n", 16);
		return (1);
	}
	if (ft_strlen_tests())
	{
		write(2, "ft_strlen - fail!\n", 18);
		return (1);
	}
	if (ft_memset_tests())
	{
		write(2, "ft_memset - fail!\n", 18);
		return (1);
	}
	if (ft_memcpy_tests())
	{
		write(2, "ft_memcpy - fail!\n", 18);
		return (1);
	}
	if (ft_strdup_tests())
	{
		write(2, "ft_strdup - fail!\n", 18);
		return (1);
	}
	if (ft_cat_tests())
	{
		write(2, "ft_cat - fail!\n", 15);
		return (1);
	}
	return (0);
}
