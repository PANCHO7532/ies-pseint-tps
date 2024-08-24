Funcion resultado <- sumarDigitos(numeroAEvaluar)
	Definir resultado, i Como Entero
	i = 10
	Mientras numeroAEvaluar mod i <> numeroAEvaluar
		Si trunc((numeroAEvaluar mod i) / 10) == 0
			resultado = numeroAEvaluar mod i
		SiNo
			resultado = resultado + trunc((numeroAEvaluar mod i) / (i / 10))
		FinSi
		i = i * 10
	FinMientras
	resultado = resultado + trunc((numeroAEvaluar mod i) / (i / 10))
FinFuncion
Algoritmo TP9_6
	Definir unNumero Como Entero
	Escribir "Ingrese un numero: "
	Leer unNumero
	Escribir "La suma de los digitos de ", unNumero, " es: ", sumarDigitos(unNumero)
FinAlgoritmo