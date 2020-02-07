section .text
global _ft_strlen

_ft_strlen:
    push rbx
    push rbp
    mov rbx, 0  
    mov rbp, 0
loop:
    mov bpl, byte [rdi + rbx]
    cmp bpl, 0
    je endofloop
    inc rbx
    jmp loop
endofloop :
    mov rax, rbx
    pop rbp
    pop rbx
    ret