	SECTION .data
chrix:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

	SECTION .text
	extern printf
	global main
main:
	mov esi, chrix
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
	