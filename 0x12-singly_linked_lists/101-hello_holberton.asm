section .text
	extern printf
	global main

main:
	mov rsi, msg
	mov rdi, format
	mov rax, 0
	call printf

	mov rax, 0
	ret

section .data
msg: db "Hello, Holberton", 0
format: db "%s", 10, 0
