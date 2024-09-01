Algoritmo TP10_3
	Definir vector, numeroABuscar Como Real
	Definir dimensionVector, i Como Entero
	Definir fueEncontrado Como Logico
	Escribir "Ingrese el tamaño del vector: "
	Leer dimensionVector
	Dimensionar vector[dimensionVector]
	Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
		Escribir "Ingrese un numero (", i+1, "/", dimensionVector, "): "
		Leer vector[i]
	FinPara
	Escribir "Ingrese numero a buscar: "
	Leer numeroABuscar
	fueEncontrado = Falso
	Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
		Si vector[i] == numeroABuscar
			fueEncontrado = Verdadero
			Escribir "Numero encontrado en la posicion n°" , i
		FinSi
	FinPara
	Si no fueEncontrado
		Escribir "El numero solicitado no ha sido encontrado."
	FinSi
FinAlgoritmo