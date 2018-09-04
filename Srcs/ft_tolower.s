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
