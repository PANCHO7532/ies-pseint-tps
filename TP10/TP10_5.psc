Funcion resultado <- valorMasGrande(vector, dimensionVector)
	Definir resultado, i Como Entero
	resultado = 0
	Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
		Si vector[i] > resultado
			resultado = vector[i]
		FinSi
	FinPara
FinFuncion
Algoritmo TP10_5
	Definir vector Como Real
	Definir dimensionVector, i Como Entero
	Escribir "Ingrese el tamaño del vector: "
	Leer dimensionVector
	Dimensionar vector[dimensionVector]
	Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
		Escribir "Ingrese un numero (", i+1, "/", dimensionVector, "): "
		Leer vector[i]
	FinPara
	Escribir "El numero mas grande que fue ingresado es: ", valorMasGrande(vector, dimensionVector)
FinAlgoritmo