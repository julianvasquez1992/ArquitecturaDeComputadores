.code

ObtenerValorAsm proc
	mov eax,635

	ret
ObtenerValorAsm endp

factorialSuma proc
	mov ebx,ecx
	mov eax,0	
	ciclo:
		add eax, ebx
		dec ebx
	jnz ciclo
	ret
factorialSuma endp

factorialMulti proc
	mov eax,0
	mov ax, cx
	mov bx, cx
	dec bx
	ciclo:
		mul bx
		dec bx
	jnz ciclo
	ret 
factorialMulti endp

sumar proc
	mov rax,0
	add rax, rcx
	add rax, rdx
	ret 
sumar endp

restar proc
	mov rax, rcx
	sub rax, rdx
	ret 
restar endp


multiplicar proc
	mov rax, rcx
	mul edx
	ret 
multiplicar endp

dividir proc
	mov eax,0
	mov ebx,0
	mov bx,dx
	mov dx,0
	mov eax, ecx
	div bx
	ret 
dividir endp

factorialSumaloop proc
	mov ebx,ecx
	mov eax,0	
	ciclo:
		add eax, ecx
		loop ciclo
		ret
factorialSumaloop endp

factorialMultiloop proc
	mov eax,0
	mov ax, cx
	dec cx
		ciclo:
		mul cx
		loop ciclo
	
	ret 
factorialMultiloop endp

suma proc
	pop rdx
	pop rax
	pop rbx
	add rax, rbx
	push rax
	push rdx
	ret 
suma endp

sumarpila proc
	;lea rax,msg
	mov rcx,100h
	mov rdx,50h
	push rcx
	push rdx
	call suma
	pop rax
	ret
sumarpila endp

end
