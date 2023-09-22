section .data
    hello_message db "Hello, Holberton",10,0  ; The string to be printed

section .text
    global main

    extern printf  ; Declare printf as an external function

main:
   push rbp       ; Save the base pointer
   mov rdi, hello_message  ; Set the format string address
   call printf   ; Call printf to print the message
   pop rbp        ; Restore the base pointer

   mov rax, 60   ; syscall number for exit
   xor rdi, rdi  ; status = 0
   syscall
