section .text
	global _ft_memset

_ft_memset:
	push rdi
	cmp rdi, 0
	je .return
	mov rax, rsi
	mov rcx, rdx
	cld
	rep stosb
.return:
	pop rax
	ret
