# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/02 14:00:20 by adzikovs          #+#    #+#              #
#    Updated: 2018/09/02 14:00:31 by adzikovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_bzero

_ft_bzero:
	cmp rdi, 0
	je .return
	mov rcx, rsi
	mov al, byte 0
	cld
	rep stosb
.return:
	ret
