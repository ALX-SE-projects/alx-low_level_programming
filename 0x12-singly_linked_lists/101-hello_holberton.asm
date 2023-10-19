extern printf
section .data
f: db "%s", 10, 0
ln: db "Hello, Holberton", 0
section .text
global main
main:
push rbp
mov rdi,f
mov rsi,ln
mov rax,0
call printf
pop rbp
mov rax,0
ret
