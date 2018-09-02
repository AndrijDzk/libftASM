# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcat.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/02 14:04:29 by adzikovs          #+#    #+#              #
#    Updated: 2018/09/02 14:04:38 by adzikovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strcat
	extern _ft_strlen

_ft_strcat:
	mov rbx, rdi
	cmp rdi, 0
	je .return
	cmp rsi, 0
	je .return
	call _ft_strlen
	add rbx, rax
	mov rdi, rsi
	call _ft_strlen
	mov rdi, rbx
	mov rcx, rax
	inc rcx
	cld
	rep movsb
.return:
	ret
