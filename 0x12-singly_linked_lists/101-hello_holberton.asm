section .data
    hello db 'Hello, Holberton', 10, 0 ; 10 is the ASCII value for newline

section .text
    extern printf
    global main

main:
    ; prepare arguments for printf
    mov rdi, hello
    xor rax, rax ; zero out rax to indicate no floating point values are passed

    ; call printf
    call printf

    ; return from main
    mov eax, 60 ; system call number for exit
    xor edi, edi ; exit code 0
    syscall ; make the system call