section .text
	global _ft_strdup
	extern _malloc, _ft_strlen, _ft_memcpy

_ft_strdup:
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	je .return_null
	push rdi
	call _ft_strlen
	inc rax
	push rax
	mov rdi, rax
	call _malloc
	mov rdi, rax
	pop rdx
	pop rsi
	call _ft_memcpy
	leave
	ret 
.return_null:
	mov rax, 0
	leave
	ret
