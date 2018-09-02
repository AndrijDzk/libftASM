# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalpha.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adzikovs <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/02 14:04:12 by adzikovs          #+#    #+#              #
#    Updated: 2018/09/02 14:04:14 by adzikovs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isalpha
	extern _ft_tolower

_ft_isalpha:
	call _ft_tolower
	cmp rax, 'a'
	jl .false
	cmp rax, 'z'
	jg .false
	mov rax, 1
	ret
.false:
	mov rax, 0
	ret
