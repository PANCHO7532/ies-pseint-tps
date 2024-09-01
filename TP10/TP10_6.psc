Funcion resultado <- tienenValoresIguales(vectorA, vectorB, dimensionVector)
	Definir resultado Como Logico
	Definir i Como Entero
	resultado = Verdadero
	Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
		Si vectorA[i] <> vectorB[i]
			resultado = Falso
		FinSi
	FinPara
FinFuncion
Algoritmo TP10_6
	Definir vectorA, vectorB Como Real
	Definir dimensionVector, i Como Entero
	Escribir "Ingrese el tamaño del vector: "
	Leer dimensionVector
	Dimensionar vectorA[dimensionVector]
	Dimensionar vectorB[dimensionVector]
	Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
		vectorA[i] = Aleatorio(1, 100)
		vectorB[i] = Aleatorio(1, 100)
		//vectorA[i] = i
		//vectorB[i] = i
	FinPara
	Si tienenValoresIguales(vectorA, vectorB, dimensionVector)
		Escribir "Ambos vectores tienen valores iguales"
	SiNo
		Escribir "Ambos vectores no tienen valores iguales"
	FinSi
FinAlgoritmo