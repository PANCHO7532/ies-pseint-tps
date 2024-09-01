Algoritmo TP10_2
	Definir vector, aux, i, j Como Real
	Dimension vector[10]
	Para i = 0 Hasta 9 Con Paso 1
		Escribir "Ingrese un numero (", i+1, "/10): "
		Leer vector[i]
	FinPara
	Para i = 0 Hasta 2 Con Paso 1
		aux = 0
		Si i == 0
			Escribir Sin Saltar "La suma de los numeros ingresados es: "
			Para j = 0 Hasta 9 Con Paso 1
				aux = aux + vector[j]
			FinPara
			Escribir aux
		FinSi
		Si i == 1
			Escribir Sin Saltar "La resta de los numeros ingresados es: "
			Para j = 0 Hasta 9 Con Paso 1
				Si j = 0
					aux = vector[j]
				SiNo
					aux = aux - vector[j]
				FinSi
			FinPara
			Escribir aux
		FinSi
		Si i == 2
			aux = 1
			Escribir Sin Saltar "La multiplicacion de los numeros ingresados es: "
			Para j = 0 Hasta 9 Con Paso 1
				aux = aux * vector[j]
			FinPara
			Escribir aux
		FinSi
	FinPara
FinAlgoritmo