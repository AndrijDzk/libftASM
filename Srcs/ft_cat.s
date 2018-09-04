section .text
	global _ft_cat
	extern _read, _write, _lseek, _malloc, _free

_ft_cat:
	push rbp
	mov rbp, rsp
	cmp rdi, 2
	jg .read_file
	mov rax, -1
	cmp rdi, 0
	jl .return
.read_stdin:
	mov rdi, 5
	call _malloc
	mov rsi, rax
.read_loop:
	mov rdi, 0
	mov rdx, 5
	call _read
	cmp rax, 0
	jle .free_rsi
	mov rdx, rax
	mov rdi, 1
	call _write
	cmp rax, 0
	jl .free_rsi
	jmp .read_loop
.read_file:
	push rdi
	xor rsi, rsi
	mov rdx, 2
	sub rsp, 8
	call _lseek
	add rsp, 8
	cmp rax, 0
	jle .return
	push rax
	xor rsi, rsi
	mov rdx, 0
	call _lseek
	pop rdi
	push rdi
	call _malloc
	pop rdx
	pop rdi
	mov rsi, rax
	call _read
	cmp rax, 0
	jle .free_rsi
	mov rdx, rax
	mov rdi, 1
	call _write
	jmp .free_rsi
.free_rsi:
	mov rdi, rsi
	call _free
.return:
	leave
	ret