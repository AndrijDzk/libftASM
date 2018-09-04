section .text
	global _ft_strlen

_ft_strlen:
	cmp rdi, 0
	je .nullret
	mov rax, rdi
.if:
	cmp [rax], byte 0
	je .return
	inc rax
	jmp .if
.return:
	sub rax, rdi	
	ret
.nullret:
	mov rax, 0
	ret
