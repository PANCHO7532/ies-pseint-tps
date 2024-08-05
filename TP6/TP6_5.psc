Algoritmo TP6_5
	Definir minimo, maximo, contador, numeroLeido Como Entero
	Escribir "Ingresa minimo: "
	Leer minimo
	Escribir "Ingresa maximo: "
	Leer maximo
	Escribir "Ingresa numero: "
	Leer numeroLeido
	Mientras numeroLeido >= minimo y numeroLeido <= maximo
		contador = contador + 1
		Escribir "Ingresa numero: "
		Leer numeroLeido
	FinMientras
	Escribir "Numeros ingresados dentro de ese intervalo: ", contador
FinAlgoritmo