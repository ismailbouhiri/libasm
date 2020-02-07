section	.text
global  _ft_strcmp

_ft_strcmp :
	push rbx
	push rbp
	push r14
	mov r14, 0
	mov rbx, 0
	mov rbp, 0

loop :
	mov bpl, byte [rdi + r14]
	mov bl, byte [rsi + r14]
	cmp bpl, 0
	je  endofloop
	cmp bl, 0
	je endofloop
	cmp bpl, bl
	jne endofloop
	inc r14
	jmp loop

endofloop :
	sub rbp, rbx
	mov rax, rbp
	pop r14
	pop rbp
	pop rbx
	ret

