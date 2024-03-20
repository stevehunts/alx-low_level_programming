section .data
    msg db "Hello, Holberton", 10, 0 ; "10" is ASCII code for newline, "0" is NULL-terminator

section .text
    global main
    extern printf

main:
    ; Prepare the stack for calling printf
    push rbp            ; Save base pointer
    mov rdi, msg        ; First argument to printf (format string)
    call printf         ; Call printf("Hello, Holberton\n")
    pop rbp             ; Restore base pointer

    ; Return from main
    mov eax, 0          ; Return 0
    ret                 ; Return

