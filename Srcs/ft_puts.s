section .text
	global _ft_puts
	extern _ft_strlen, _write

_ft_puts:
	push rbp
	mov rbp, rsp
	cmp rdi, 0
	je .printnull
	mov rsi, rdi
	call _ft_strlen
	mov rdi, 1
	mov rdx, rax
	call _write
	cmp rax, 0
	jl .return
	jmp .printnewline
.printnull:
	mov rdi, 1
	mov rsi, .line
	mov rdx, .len+1
	call _write
	cmp rax, 0
	jl .return
	jmp .return
.printnewline:
	push rax
	sub rsp, 8
	mov rdi, 1
	mov rsi, .line+.len
	mov rdx, 1
	call _write
	add rsp, 8
	pop rbx
	cmp rax, 0
	jl .return
	add rax, rbx
.return:
	mov rax, 10
	leave
	ret

section .data
	.line db "(null)", 10
	.len equ $ - .line - 1
