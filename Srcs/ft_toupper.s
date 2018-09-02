# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_toupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/02 14:05:41 by adzikovs          #+#    #+#              #
#    Updated: 2018/09/02 14:05:52 by adzikovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_toupper

_ft_toupper:
	mov rax, rdi
	cmp rdi, 'a'
	jl .return
	cmp rdi, 'z'
	jg .return
	sub rax, 32
.return:
	ret
