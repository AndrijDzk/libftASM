# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_tolower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/02 14:04:53 by adzikovs          #+#    #+#              #
#    Updated: 2018/09/02 14:04:54 by adzikovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_tolower

_ft_tolower:
	mov rax, rdi
	cmp rdi, 'A'
	jl .return
	cmp rdi, 'Z'
	jg .return
	add rax, 32
.return:
	ret
