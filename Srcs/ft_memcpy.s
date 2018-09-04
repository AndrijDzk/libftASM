section .text
	global _ft_memcpy

_ft_memcpy:
	push rdi
	cmp rdi, 0
	je .return
	cmp rsi, 0
	je .return
	mov rcx, rdx
	cld
	rep movsb
.return:
	pop rax
	ret
