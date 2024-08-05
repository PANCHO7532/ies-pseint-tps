Algoritmo TP6_8
	Definir unNumero, contador Como Entero
	Escribir "Ingrese un numero: "
	Leer unNumero
	contador = 0
	Mientras unNumero > 0
		unNumero = trunc(unNumero / 10)
		contador = contador + 1
	FinMientras
	Escribir "El numero tiene ", contador, " digitos."
FinAlgoritmo