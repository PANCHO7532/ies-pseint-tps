Algoritmo TP6_3
	Definir sumaNumeros, numeroLeido, contador Como Real
	numeroLeido = 0
	sumaNumeros = 0
	contador = 0
	Mientras numeroLeido > -1
		Escribir "Ingrese un numero: "
		Leer numeroLeido
		Si numeroLeido > -1
			sumaNumeros = sumaNumeros + numeroLeido
			contador = contador + 1
		FinSi
	FinMientras
	Escribir "El promedio de los numeros ingresados es: ", (sumaNumeros / contador)
FinAlgoritmo