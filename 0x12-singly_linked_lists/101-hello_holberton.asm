section		.text
	extern  printf
	global  main
main:
	mov 		edi, hello_string
	mov		eax, 0
	call    printf
section		 .data
	hello_string db 'Hello, Holberton', 0xa, 0
