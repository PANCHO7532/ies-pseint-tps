Funcion resultado <- esImpar(num)
	Definir resultado Como Logico
	Si num % 2 <> 0
		resultado = Verdadero
	SiNo
		resultado = Falso
	FinSi
FinFuncion

Algoritmo TP9_2
	Definir unNumero Como Entero
	Escribir "Ingrese un numero: "
	Leer unNumero
	Si esImpar(unNumero)
		Escribir "El numero es impar"
	SiNo
		Escribir "El numeor no es impar"
	FinSi
FinAlgoritmo