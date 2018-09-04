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
