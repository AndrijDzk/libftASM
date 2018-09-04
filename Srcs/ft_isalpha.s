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
