section .text
	global _ft_bzero

_ft_bzero:
	cmp rdi, 0
	je .return
	mov rcx, rsi
	mov al, byte 0
	cld
	rep stosb
.return:
	ret
