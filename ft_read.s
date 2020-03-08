section .text
global _ft_read

_ft_read :
    mov rax, 0x2000003
    syscall
    jc erreur
    ret
erreur :
    mov rax, -1
    ret