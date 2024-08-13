Algoritmo TP7_5
	Definir totalNumeros, numeroLeido, contador Como Entero
	totalNumeros = 0
	contador = 0
	Repetir
		Escribir "Ingrese un numero (", contador + 1, "/10): "
		Leer numeroLeido
		totalNumeros = totalNumeros + numeroLeido
		contador = contador + 1
	Hasta Que contador == 10
	Escribir "El promedio de los numeros ingresados es: ", totalNumeros / 10
FinAlgoritmo