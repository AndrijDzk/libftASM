section .text
	global _ft_strcat
	extern _ft_strlen

_ft_strcat:
	mov rbx, rdi
	push rdi
	cmp rdi, 0
	je .return
	cmp rsi, 0
	je .return
	call _ft_strlen
	add rbx, rax
	mov rdi, rsi
	call _ft_strlen
	mov rdi, rbx
	mov rcx, rax
	inc rcx
	cld
	rep movsb
.return:
	pop rax
	ret
