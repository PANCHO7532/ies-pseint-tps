Algoritmo TP10_4
	Definir vectorA, vectorB, vectorC Como Real
	Definir dimensionVector, i Como Entero
	Definir eleccion Como Caracter
	Definir pararPrograma Como Logico
	pararPrograma = Falso
	Escribir "Ingrese el tamaño de los vectores a usar: "
	Leer dimensionVector
	Dimension vectorA[dimensionVector]
	Dimension vectorB[dimensionVector]
	Dimension vectorC[dimensionVector]
	Mientras pararPrograma == Falso
		Limpiar Pantalla
		Escribir "Ingrese lo que desea hacer: "
		Escribir "A) Llenar Vector A"
		Escribir "B) Llenar Vector B"
		Escribir "C) Llenar Vector C con la suma de los vectores A y B"
		Escribir "D) Llenar Vector C con la resta de los vectores B y A"
		Escribir "E) Mostrar un Vector"
		Escribir "F) Salir"
		Leer eleccion
		eleccion = Mayusculas(Subcadena(eleccion, 0, 0))
		Segun eleccion Hacer
			"A":
				Limpiar Pantalla
				llenarVector(vectorA, dimensionVector)
				Escribir "Vector A llenado! Presione ENTER para continuar."
				Leer eleccion
			"B":
				Limpiar Pantalla
				llenarVector(vectorB, dimensionVector)
				Escribir "Vector B llenado! Presione ENTER para continuar."
				Leer eleccion
			"C":
				Limpiar Pantalla
				Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
					vectorC[i] = vectorA[i] + vectorB[i]
				FinPara
				Escribir "Vector C llenado! Presione ENTER para continuar."
				Leer eleccion
			"D":
				Limpiar Pantalla
				Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
					vectorC[i] = vectorB[i] - vectorA[i]
				FinPara
				Escribir "Vector C llenado! Presione ENTER para continuar."
				Leer eleccion
			"E":
				Limpiar Pantalla
				Escribir "Que vector desea imprimir?"
				Escribir "A) Vector A"
				Escribir "B) Vector B"
				Escribir "C) Vector C"
				Leer eleccion
				eleccion = Mayusculas(Subcadena(eleccion, 0, 0))
				Si eleccion == "A"
					mostrarVector(vectorA, dimensionVector)
					Escribir "Presione ENTER para continuar."
					Leer eleccion
				FinSi
				Si eleccion == "B"
					mostrarVector(vectorB, dimensionVector)
					Escribir "Presione ENTER para continuar."
					Leer eleccion
				FinSi
				Si eleccion == "C"
					mostrarVector(vectorC, dimensionVector)
					Escribir "Presione ENTER para continuar."
					Leer eleccion
				FinSi
			"F":
				pararPrograma = Verdadero
		FinSegun
	FinMientras
	
FinAlgoritmo
SubProceso llenarVector(vector, dimensionVector)
	Definir i Como Entero
	Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
		vector[i] = Aleatorio(-100, 100)
	FinPara
FinSubProceso
SubProceso mostrarVector(vector, dimensionVector)
	Definir i Como Entero
	Escribir Sin Saltar "["
	Para i = 0 Hasta (dimensionVector - 1) Con Paso 1
		Si i == (dimensionVector - 1)
			Escribir vector[i], "]"
		SiNo
			Escribir Sin Saltar vector[i], ", "
		FinSi
	FinPara
FinSubProceso