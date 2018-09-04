/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:11:49 by adzikovs          #+#    #+#             */
/*   Updated: 2018/09/04 15:11:51 by adzikovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/fcntl.h>

#include "libftasm.h"

int		ft_cat_tests(void)
{
	int		fd;

	fd = open("author", O_RDONLY);
	if (fd > 0)
	{
		ft_cat(fd);
		close(fd);
	}
	ft_cat(0);
	ft_cat(-1);
	return (0);
}
