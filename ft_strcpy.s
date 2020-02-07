section .text
global  _ft_strcpy

_ft_strcpy : 
    push rbx
    push rbp
    mov rbx, 0
    mov rbp, 0

loop :
    mov bpl, byte [rsi + rbx]
    cmp bpl, 0
    je endofloop
    mov byte [rdi + rbx], bpl
    inc rbx
    jmp loop

endofloop :
    mov byte [rdi + rbx], bpl
    mov rax, rdi
    pop rbp
    pop rbx
    ret
