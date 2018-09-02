# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/02 14:04:45 by adzikovs          #+#    #+#              #
#    Updated: 2018/09/02 14:04:46 by adzikovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strlen

_ft_strlen:
	cmp rdi, 0
	je .nullret
	mov rax, rdi
.if:
	cmp [rax], byte 0
	je .return
	inc rax
	jmp .if
.return:
	sub rax, rdi	
	ret
.nullret:
	mov rax, 0
	ret
