.data
	myvar byte "Hello, Holberton",0

.code
main PROC
	mov edx, offset myvar
	call writestring
	exit
main ENDP

END main

