section .text
	global _start

_start:
	;divisão
	mov eax,number
	mov ebx,2 ;divisor
	div ebx
	mov eax,4
	mov ecx,ebx
	mov ebx,1
	mov edx,5
	int 80h

section .data
		number DD 0
